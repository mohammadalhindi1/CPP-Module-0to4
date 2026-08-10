# 42 C++ Modules — CPP00 to CPP09

<div align="center">

**A complete C++98 learning path through the object-oriented programming modules of the 42 curriculum.**

[![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://cplusplus.com/)
[![C++98](https://img.shields.io/badge/Standard-C%2B%2B98-1f6feb?style=for-the-badge)](#42-compliance)
[![42 Amman](https://img.shields.io/badge/42-Amman-000000?style=for-the-badge&logo=42&logoColor=white)](https://42amman.com/)
[![Progress](https://img.shields.io/badge/Progress-5%20%2F%2010%20Modules-f59e0b?style=for-the-badge)](#module-roadmap)

`CPP00` · `CPP01` · `CPP02` · `CPP03` · `CPP04` · `CPP05` · `CPP06` · `CPP07` · `CPP08` · `CPP09`

</div>

---

## Overview

This repository documents my progress through all ten C++ modules at **42 Amman**. It begins with the transition from C to C++ and develops toward object-oriented design, safe resource management, templates, containers, and algorithmic problem solving.

The repository currently contains **19 completed exercises across CPP00–CPP04**. Modules **CPP05–CPP09** are included in the roadmap and will be added progressively.

Every available exercise is self-contained, uses the C++98 standard, and is compiled with:

```text
-Wall -Wextra -Werror -std=c++98
```

## Table of Contents

- [Module Roadmap](#module-roadmap)
- [Completed Modules](#completed-modules)
- [Upcoming Modules](#upcoming-modules)
- [Target Repository Structure](#target-repository-structure)
- [Build and Run](#build-and-run)
- [42 Compliance](#42-compliance)
- [Learning Outcomes](#learning-outcomes)
- [Author](#author)

## Module Roadmap

| Module | Primary focus | Exercises | Status |
| --- | --- | :---: | :---: |
| [`CPP00`](./Cpp_00) | Namespaces, streams, classes, and encapsulation | 2 | ✅ Complete |
| [`CPP01`](./Cpp_01) | Memory allocation, references, pointers, and file streams | 6 | ✅ Complete |
| [`CPP02`](./Cpp_02) | Orthodox Canonical Form, fixed-point numbers, and operators | 3 | ✅ Complete |
| [`CPP03`](./Cpp_03) | Inheritance, class hierarchies, and the diamond problem | 4 | ✅ Complete |
| [`CPP04`](./Cpp_04) | Runtime polymorphism, abstract classes, and interfaces | 4 | ✅ Complete |
| `CPP05` | Exceptions, validation, and form execution | 4 | ⏳ Planned |
| `CPP06` | Scalar conversion, serialization, and runtime type identification | 3 | ⏳ Planned |
| `CPP07` | Function templates, iteration, and generic arrays | 3 | ⏳ Planned |
| `CPP08` | STL containers, iterators, and algorithms | 3 | ⏳ Planned |
| `CPP09` | Data processing, container selection, and advanced algorithms | 3 | ⏳ Planned |

> The exact implementation of upcoming exercises will follow the official subject version assigned by 42 at the time of development.

## Completed Modules

### CPP00 — Introduction to C++

| Exercise | Program | Main objective |
| --- | --- | --- |
| [`ex00`](./Cpp_00/ex00) | `megaphone` | Command-line arguments, strings, character conversion, and output streams |
| [`ex01`](./Cpp_00/ex01) | `phonebook` | Classes, private data, formatted output, and a fixed-size contact store |

The phone book supports `ADD`, `SEARCH`, and `EXIT` while keeping contact data encapsulated inside dedicated classes.

### CPP01 — Memory and References

| Exercise | Program | Main objective |
| --- | --- | --- |
| [`ex00`](./Cpp_01/ex00) | `zombie` | Stack and heap allocation, constructors, destructors, `new`, and `delete` |
| [`ex01`](./Cpp_01/ex01) | `zombieHorde` | Dynamic arrays and cleanup with `delete[]` |
| [`ex02`](./Cpp_01/ex02) | `brain` | Values, pointers, references, and memory addresses |
| [`ex03`](./Cpp_01/ex03) | `violence` | Object relationships through references and nullable pointers |
| [`ex04`](./Cpp_01/ex04) | `replace` | File streams, string search, and non-destructive text replacement |
| [`ex05`](./Cpp_01/ex05) | `harl` | Pointers to member functions and behavior dispatch |

### CPP02 — Ad-hoc Polymorphism

| Exercise | Program | Main objective |
| --- | --- | --- |
| [`ex00`](./Cpp_02/ex00) | `fixed` | Orthodox Canonical Form and raw fixed-point storage |
| [`ex01`](./Cpp_02/ex01) | `fixed` | Integer and floating-point conversion plus `operator<<` |
| [`ex02`](./Cpp_02/ex02) | `fixed` | Comparison, arithmetic, increment/decrement, and `min`/`max` overloads |

CPP02 develops the same `Fixed` class progressively so every new constructor, conversion, and operator has a clear purpose.

### CPP03 — Inheritance

| Exercise | Program | Main objective |
| --- | --- | --- |
| [`ex00`](./Cpp_03/ex00) | `claptrap` | Base-class design, state management, and canonical class behavior |
| [`ex01`](./Cpp_03/ex01) | `scavtrap` | Public inheritance and specialized derived-class behavior |
| [`ex02`](./Cpp_03/ex02) | `fragtrap` | Reusing one base class across multiple derived classes |
| [`ex03`](./Cpp_03/ex03) | `diamondtrap` | Multiple inheritance, name hiding, and the diamond problem |

### CPP04 — Subtype Polymorphism

| Exercise | Program | Main objective |
| --- | --- | --- |
| [`ex00`](./Cpp_04/ex00) | `polymorphism` | Virtual functions, runtime dispatch, and safe base-pointer deletion |
| [`ex01`](./Cpp_04/ex01) | `brains` | Dynamic ownership and deep copy construction/assignment |
| [`ex02`](./Cpp_04/ex02) | `abstract` | Abstract base classes and pure virtual functions |
| [`ex03`](./Cpp_04/ex03) | `materia` | Interfaces, cloning, inventories, and polymorphic objects |

CPP04 combines inheritance with explicit memory ownership. It demonstrates why virtual destructors, deep copies, abstract classes, and small interfaces matter in real class hierarchies.

## Upcoming Modules

### CPP05 — Exceptions

| Exercise | Planned focus |
| --- | --- |
| `ex00` | `Bureaucrat`, grade validation, custom exceptions, and stream insertion |
| `ex01` | Signable forms and controlled interaction between objects |
| `ex02` | Abstract forms, concrete actions, and execution requirements |
| `ex03` | `Intern` factory behavior and form creation by name |

### CPP06 — C++ Casts

| Exercise | Planned focus |
| --- | --- |
| `ex00` | Scalar conversion between character, integer, float, and double types |
| `ex01` | Pointer serialization with `uintptr_t` |
| `ex02` | Runtime identification of derived objects through a base type |

### CPP07 — Templates

| Exercise | Planned focus |
| --- | --- |
| `ex00` | Generic function templates |
| `ex01` | Applying a function to every item through `iter` |
| `ex02` | A bounds-checked generic `Array` class with safe copy behavior |

### CPP08 — Templated Containers

| Exercise | Planned focus |
| --- | --- |
| `ex00` | Finding values inside standard containers with `easyfind` |
| `ex01` | Range management and span calculations |
| `ex02` | Extending `std::stack` with iterator access through `MutantStack` |

### CPP09 — STL and Algorithms

| Exercise | Planned focus |
| --- | --- |
| `ex00` | Bitcoin exchange data parsing, date validation, and historical lookup |
| `ex01` | Reverse Polish Notation evaluation |
| `ex02` | Merge-insert sorting and performance comparison across containers |

## Target Repository Structure

```text
.
├── Cpp_00/    # Complete
├── Cpp_01/    # Complete
├── Cpp_02/    # Complete
├── Cpp_03/    # Complete
├── Cpp_04/    # Complete
├── Cpp_05/    # Planned
├── Cpp_06/    # Planned
├── Cpp_07/    # Planned
├── Cpp_08/    # Planned
├── Cpp_09/    # Planned
└── README.md
```

Each exercise is developed as an independent project with its own source files, headers, `main.cpp`, and `Makefile`.

## Build and Run

### Requirements

- Linux, macOS, or WSL.
- A C++ compiler with C++98 support.
- GNU Make.
- Git.

### Clone

```bash
git clone <repository-url> cpp-modules
cd cpp-modules
```

### Compile an exercise

```bash
cd Cpp_00/ex01
make
./phonebook
```

The executable name is defined by the `NAME` variable inside each exercise's `Makefile`.

### Standard Makefile Commands

| Command | Purpose |
| --- | --- |
| `make` | Compile the exercise |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the executable |
| `make re` | Rebuild the exercise from scratch |

## 42 Compliance

Each implementation is kept within the rules of its assigned subject:

- C++98 only; features from later C++ standards are not used.
- Compilation with `-Wall -Wextra -Werror`.
- No external libraries or unauthorized functions.
- STL containers and algorithms are used only when the module permits them.
- Orthodox Canonical Form is implemented where required.
- Dynamic allocations are paired with clear ownership and cleanup.
- Every exercise remains independent and includes the required `Makefile` rules.
- The official subject for each module remains the final source of truth.

## Learning Outcomes

By the end of CPP09, this repository will cover:

- Classes, objects, encapsulation, and access control.
- Constructors, destructors, copy constructors, and assignment operators.
- Stack memory, heap memory, pointers, references, and `const` correctness.
- File streams and string processing.
- Function and operator overloading.
- Inheritance, runtime polymorphism, abstract classes, and interfaces.
- Exception handling and defensive validation.
- Explicit C++ casts and runtime type identification.
- Function templates and class templates.
- STL containers, iterators, and algorithms under the permitted module rules.
- Parsing structured input and selecting appropriate data structures.
- Algorithm design, complexity awareness, and performance measurement.

## Progress Policy

A module is marked **Complete** only after all of its included exercises:

1. Compile with the required C++98 flags.
2. Pass focused normal, boundary, and failure-case tests.
3. Respect the rules of the corresponding 42 subject.
4. Have no known memory leaks or invalid memory access.
5. Are documented in this README.

## Author

**Mohammad Alhindi** · `malhendi`

- [GitHub](https://github.com/mohammadalhindi1)
- [LinkedIn](https://www.linkedin.com/in/mohammad-alhendi13)

---

<div align="center">

**Built step by step as a long-term reference for the complete 42 C++ path.**

</div>
