/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:00:00 by malhendi          #+#    #+#             */
/*   Updated: 2026/08/06 18:00:00 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called for " << _name
        << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap name constructor called for " << _name
        << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : _name(other._name), _hitPoints(other._hitPoints),
      _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap copy constructor called for " << _name
        << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot attack because it has no hit points." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot attack because it has no energy points." << std::endl;
        return;
    }
    --_energyPoints;
    std::cout << "ClapTrap " << _name << " attacks " << target
        << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already destroyed."
            << std::endl;
        return;
    }
    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount
        << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot be repaired because it is destroyed." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name
            << " cannot be repaired because it has no energy points."
            << std::endl;
        return;
    }
    --_energyPoints;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount
        << " hit points!" << std::endl;
}
