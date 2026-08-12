# 42 C++ Modules — CPP00 to CPP09

<div align="center">

**C++98 implementations of the 42 C++ curriculum, maintained module by module.**

![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C++98](https://img.shields.io/badge/Standard-C%2B%2B98-1f6feb?style=for-the-badge)
![42 Amman](https://img.shields.io/badge/42-Amman-000000?style=for-the-badge&logo=42&logoColor=white)
![Progress](https://img.shields.io/badge/Progress-5%20%2F%2010%20Modules-f59e0b?style=for-the-badge)

`CPP00` · `CPP01` · `CPP02` · `CPP03` · `CPP04` · `CPP05` · `CPP06` · `CPP07` · `CPP08` · `CPP09`

</div>

---

## Overview

This repository contains my implementations of the **42 C++ Modules** at **42 Amman**. Each exercise is maintained as an independent C++98 project with its own source files, headers, test entry point, and `Makefile`.

The current codebase includes **19 completed exercises across CPP00–CPP04**. Modules **CPP05–CPP09** remain part of the repository roadmap and will be added only after their implementations are complete and validated.

The repository is an implementation record rather than a tutorial: it highlights technical scope, engineering constraints, and verified progress without replacing the official 42 subjects.

## Contents

- [Repository Status](#repository-status)
- [Implemented Modules](#implemented-modules)
- [Repository Structure](#repository-structure)
- [Build](#build)
- [42 Compliance](#42-compliance)
- [Completion Criteria](#completion-criteria)
- [Author](#author)

## Repository Status

| Module | Technical scope | Status |
| --- | --- | :---: |
| [`CPP00`](./Cpp_00) | Namespaces, streams, classes, and encapsulation | Complete |
| [`CPP01`](./Cpp_01) | Object lifetime, memory allocation, references, pointers, and file streams | Complete |
| [`CPP02`](./Cpp_02) | Orthodox Canonical Form, fixed-point arithmetic, and operator overloading | Complete |
| [`CPP03`](./Cpp_03) | Inheritance, class hierarchies, and multiple inheritance | Complete |
| [`CPP04`](./Cpp_04) | Runtime polymorphism, abstract classes, interfaces, and deep copy semantics | Complete |
| `CPP05` | Exceptions, validation, and executable forms | Planned |
| `CPP06` | Scalar conversion, serialization, and runtime type identification | Planned |
| `CPP07` | Function templates, generic iteration, and template classes | Planned |
| `CPP08` | STL containers, iterators, and algorithms | Planned |
| `CPP09` | Data processing, container selection, and algorithmic performance | Planned |

> Planned entries describe the curriculum direction. The official subject version assigned by 42 defines the final scope of each module.

## Implemented Modules

### CPP00 — Fundamentals and Encapsulation

| Exercise | Program | Technical scope |
| --- | --- | --- |
| [`ex00`](./Cpp_00/ex00) | `megaphone` | Command-line input, character conversion, and stream output |
| [`ex01`](./Cpp_00/ex01) | `phonebook` | Encapsulated classes, fixed-capacity storage, formatted lookup, and input handling |

### CPP01 — Memory and Object Lifetime

| Exercise | Program | Technical scope |
| --- | --- | --- |
| [`ex00`](./Cpp_01/ex00) | `zombie` | Stack and heap allocation, constructors, destructors, `new`, and `delete` |
| [`ex01`](./Cpp_01/ex01) | `zombieHorde` | Dynamic object arrays and deterministic cleanup with `delete[]` |
| [`ex02`](./Cpp_01/ex02) | `brain` | Pointer and reference identity, addresses, and aliasing |
| [`ex03`](./Cpp_01/ex03) | `violence` | Object relationships through references and nullable pointers |
| [`ex04`](./Cpp_01/ex04) | `replace` | File streams and non-destructive string replacement |
| [`ex05`](./Cpp_01/ex05) | `harl` | Member-function pointers and behavior dispatch |

### CPP02 — Ad-hoc Polymorphism

| Exercise | Program | Technical scope |
| --- | --- | --- |
| [`ex00`](./Cpp_02/ex00) | `fixed` | Orthodox Canonical Form and raw fixed-point representation |
| [`ex01`](./Cpp_02/ex01) | `fixed` | Numeric conversion and stream insertion overloading |
| [`ex02`](./Cpp_02/ex02) | `fixed` | Comparison, arithmetic, increment/decrement, and `min`/`max` overloads |

### CPP03 — Inheritance

| Exercise | Program | Technical scope |
| --- | --- | --- |
| [`ex00`](./Cpp_03/ex00) | `claptrap` | Stateful base-class design and canonical copy behavior |
| [`ex01`](./Cpp_03/ex01) | `scavtrap` | Public inheritance, construction order, and specialized behavior |
| [`ex02`](./Cpp_03/ex02) | `fragtrap` | Shared base behavior across sibling derived classes |
| [`ex03`](./Cpp_03/ex03) | `diamondtrap` | Multiple inheritance, method selection, and diamond hierarchy resolution |

### CPP04 — Subtype Polymorphism

| Exercise | Program | Technical scope |
| --- | --- | --- |
| [`ex00`](./Cpp_04/ex00) | `polymorphism` | Virtual dispatch and safe destruction through base pointers |
| [`ex01`](./Cpp_04/ex01) | `brains` | Dynamic ownership and deep copy construction/assignment |
| [`ex02`](./Cpp_04/ex02) | `abstract` | Abstract base classes and pure virtual functions |
| [`ex03`](./Cpp_04/ex03) | `materia` | Interface-driven design, cloning, inventory ownership, and polymorphic objects |

## Repository Structure

```text
.
├── Cpp_00/
├── Cpp_01/
├── Cpp_02/
├── Cpp_03/
├── Cpp_04/
└── README.md
```

Module directories are added when implementation begins; empty placeholders for planned work are not maintained.

## Build

Run each exercise from its own directory:

```bash
cd Cpp_04/ex03
make
./materia
```

The generated executable is defined by the exercise `Makefile`. Standard targets are `all`, `clean`, `fclean`, and `re`.

## 42 Compliance

All implementations follow the rules of their assigned subject, including:

- compilation with `c++ -Wall -Wextra -Werror -std=c++98`;
- no C++11 or later language features;
- no Boost or external libraries;
- standard containers and algorithms only in modules where they are explicitly permitted;
- Orthodox Canonical Form where required;
- explicit ownership and cleanup for dynamically allocated resources;
- an independent `Makefile` for every exercise.

The official subject provided by 42 remains the final authority whenever requirements differ between subject versions.

## Completion Criteria

A module is marked **Complete** only when all of its exercises:

1. Compile cleanly with the required flags.
2. Cover normal, boundary, and failure paths through focused tests.
3. Respect the restrictions of the assigned subject.
4. Have no known memory leaks or invalid memory access.
5. Are documented and linked from this README.

## Author

**Mohammad Alhindi** · `malhendi`

- [GitHub](https://github.com/mohammadalhindi1)
- [LinkedIn](https://www.linkedin.com/in/mohammad-alhendi13)

---

<div align="center">

**A single, versioned record of the complete 42 C++ path.**

</div>
