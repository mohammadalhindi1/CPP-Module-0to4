#include "MateriaSource.hpp"
#include <cstddef>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    copyMaterias(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        clearMaterias();
        copyMaterias(other);
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    clearMaterias();
}

void MateriaSource::clearMaterias(void)
{
    for (int i = 0; i < 4; i++)
    {
        delete materias[i];
        materias[i] = NULL;
    }
}

void MateriaSource::copyMaterias(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.materias[i] != NULL)
            materias[i] = other.materias[i]->clone();
        else
            materias[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (materia == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == materia)
            return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = materia;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL && materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return NULL;
}
