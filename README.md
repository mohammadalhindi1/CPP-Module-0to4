# 42 C++ Modules — CPP00 to CPP04

A structured C++98 learning journey through the introductory object-oriented
programming modules of the 42 curriculum.

![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)
![42 Amman](https://img.shields.io/badge/42-Amman-000000?style=flat-square&logo=42)
![Status](https://img.shields.io/badge/Status-In%20Progress-f59e0b?style=flat-square)

## Overview

This repository documents my progress through the first five C++ modules at
**42 Amman**. The exercises are designed to build a solid foundation in C++
after working primarily with C, with an emphasis on object-oriented design,
resource management, and predictable class behavior.

The repository currently contains **11 exercises across CPP00, CPP01, and
CPP02**. CPP03 and CPP04 will be added as the learning path progresses.

All included exercises use the C++98 standard and compile with:

```text
-Wall -Wextra -Werror -std=c++98
```

## Table of Contents

- [Repository Progress](#repository-progress)
- [What Each Exercise Covers](#what-each-exercise-covers)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Build Commands](#build-commands)
- [Core Concepts](#core-concepts)
- [Author](#author)

## Repository Progress

| Module | Exercises currently included | Focus | Status |
| --- | --- | --- | --- |
| CPP00 | `ex00`–`ex01` | C++ syntax, streams, classes, and encapsulation | Available |
| CPP01 | `ex00`–`ex05` | Memory, references, object lifetime, and file streams | Available |
| CPP02 | `ex00`–`ex02` | Orthodox Canonical Form, fixed-point numbers, and operators | Available |
| CPP03 | — | Inheritance and class hierarchies | Not added yet |
| CPP04 | — | Runtime polymorphism and abstract classes | Not added yet |

## What Each Exercise Covers

### CPP00 — Introduction to C++

| Exercise | Program | Main learning objective |
| --- | --- | --- |
| [`ex00`](./Cpp_00/ex00) | `megaphone` | Command-line arguments, strings, character conversion, and output streams |
| [`ex01`](./Cpp_00/ex01) | `phonebook` | Classes, private data, getters and setters, formatted output, and a fixed-size contact store |

The phone book supports three interactive commands:

- `ADD` — save a contact.
- `SEARCH` — display the contact list and inspect one entry.
- `EXIT` — close the program.

### CPP01 — Memory, References, and Object Lifetime

| Exercise | Program | Main learning objective |
| --- | --- | --- |
| [`ex00`](./Cpp_01/ex00) | `zombie` | Stack allocation, heap allocation, constructors, destructors, `new`, and `delete` |
| [`ex01`](./Cpp_01/ex01) | `zombieHorde` | Dynamic arrays and correct cleanup with `delete[]` |
| [`ex02`](./Cpp_01/ex02) | `brain` | The relationship between a value, a pointer, and a reference |
| [`ex03`](./Cpp_01/ex03) | `violence` | References, nullable pointers, and relationships between objects |
| [`ex04`](./Cpp_01/ex04) | `replace` | File streams, string search, and non-destructive text replacement |
| [`ex05`](./Cpp_01/ex05) | `harl` | Pointers to member functions and behavior dispatch without long conditional chains |

The file replacement exercise creates a new `<filename>.replace` file and
keeps the original input file unchanged.

### CPP02 — Fixed-Point Numbers and Operator Overloading

| Exercise | Program | Main learning objective |
| --- | --- | --- |
| [`ex00`](./Cpp_02/ex00) | `fixed` | Orthodox Canonical Form, copy construction, copy assignment, and raw fixed-point storage |
| [`ex01`](./Cpp_02/ex01) | `fixed` | Integer and floating-point conversion plus stream insertion with `operator<<` |
| [`ex02`](./Cpp_02/ex02) | `fixed` | Comparison, arithmetic, increment/decrement, and `min`/`max` operator-style behavior |

CPP02 builds the same `Fixed` class incrementally. Each exercise extends the
previous implementation so the effect of every new feature remains clear.

## Project Structure

```text
CPP-Module-0to4/
├── Cpp_00/
│   ├── ex00/   # Megaphone
│   └── ex01/   # PhoneBook
├── Cpp_01/
│   ├── ex00/   # Zombie allocation
│   ├── ex01/   # Zombie horde
│   ├── ex02/   # Pointers and references
│   ├── ex03/   # Weapon, HumanA, and HumanB
│   ├── ex04/   # File replacement
│   └── ex05/   # Harl
├── Cpp_02/
│   ├── ex00/   # Canonical Fixed class
│   ├── ex01/   # Numeric conversions
│   └── ex02/   # Operator overloads
└── README.md
```

Each exercise is self-contained and includes its own source files and
`Makefile`.

## Getting Started

### Prerequisites

You need:

- A Unix-like environment such as Linux, macOS, or WSL.
- A C++ compiler with C++98 support.
- GNU Make.
- Git.

### Clone the repository

```bash
git clone https://github.com/mohammadalhindi1/CPP-Module-0to4.git
cd CPP-Module-0to4
```

### Build and run an exercise

Enter the exercise directory, compile it, and run the generated executable:

```bash
cd Cpp_00/ex01
make
./phonebook
```

Another example:

```bash
cd Cpp_01/ex04
make
./replace input.txt old_text new_text
```

To find the executable name for any exercise, check the `Program` column above
or the `NAME` variable in that exercise's `Makefile`.

## Build Commands

Every exercise supports the standard 42 Makefile commands:

| Command | Purpose |
| --- | --- |
| `make` | Compile the exercise |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the executable |
| `make re` | Perform a clean rebuild |

## Core Concepts

The exercises in this repository practice:

- C++ namespaces and standard input/output streams.
- Classes, objects, access control, and encapsulation.
- Constructors, destructors, and object lifetime.
- Stack allocation versus dynamic memory allocation.
- Pointers, references, and `const` correctness.
- File input/output and string manipulation.
- Orthodox Canonical Form and the Rule of Three.
- Fixed-point number representation.
- Function and operator overloading.
- Comparison and arithmetic operators.
- Clean, modular class interfaces.

Future CPP03 and CPP04 work will extend these foundations into inheritance,
virtual functions, runtime polymorphism, abstract classes, interfaces, and deep
copy semantics.

## Author

**Mohammad Alhindi** (`malhendi`)

- [GitHub](https://github.com/mohammadalhindi1)
- [LinkedIn](https://www.linkedin.com/in/mohammad-alhendi13)

---

> This repository is maintained as a learning record and reference for the 42
> C++ curriculum.
