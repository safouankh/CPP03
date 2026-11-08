# CPP03

C++ Module 03 from the 42 curriculum. This project explores **inheritance** by building a small hierarchy of combat-robot classes, starting with `ClapTrap` and extending it with specialized traps.

## Exercises

| Directory | Program | What it covers |
| --- | --- | --- |
| `ex00/` | `ClapTrap` | A base class with hit points, energy points, attack damage, and attack, damage, and repair actions. |
| `ex01/` | `ScavTrap` | Derives `ScavTrap` from `ClapTrap`, overrides behavior, and adds the `guardGate()` ability. |
| `ex02/` | `FragTrap` | Adds `FragTrap` alongside `ScavTrap`, extending the trap hierarchy and providing the `highFivesGuys()` ability. |

Each exercise is self-contained and has its own `main.cpp` and Makefile.

## Requirements

- A C++ compiler (`c++` or compatible)
- GNU Make

The Makefiles compile with C++98 and the flags `-Wall -Wextra -Werror`.

## Build and run

Build an exercise from its directory:

```bash
cd ex00
make
./ClapTrap
```

For the other exercises, use the matching directory and executable:

```bash
cd ex01
make
./ScavTrap
```

```bash
cd ex02
make
./FragTrap
```

Each Makefile also provides `clean`, `fclean`, and `re` targets:

```bash
make clean  # Remove object files
make fclean # Remove object files and the executable
make re     # Rebuild from scratch
```

## Repository structure

```text
.
├── ex00/          # ClapTrap
├── ex01/          # ClapTrap and ScavTrap
├── ex02/          # ClapTrap, ScavTrap, and FragTrap
└── en.subject (1).pdf
```

See `en.subject (1).pdf` for the original module requirements.