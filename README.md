# C++ Module 03 - Inheritance

This project aims to introduce Object-Oriented Programming in C++, specifically focusing on the concept of **inheritance**.

## General Rules
* **Language:** C++98.
* **Compilation:** `c++ -Wall -Wextra -Werror -std=c++98`.
* **Style:** Classes must be designed in the **Orthodox Canonical Form** (Default Constructor, Copy Constructor, Assignment Operator, Destructor).
* **Memory:** No memory leaks are tolerated.

---

## Exercise 00: Aaaaand... OPEN!
**Directory:** `ex00/`

The goal is to implement a base class representing a robot: **ClapTrap**.

### Features
The `ClapTrap` class has private attributes and public member functions to simulate behavior:
* **Attributes:**
    * `Name` (passed as a parameter to the constructor).
    * `Hit Points` (10): Represents health.
    * `Energy Points` (10).
    * `Attack Damage` (0).
* **Actions:**
    * `attack(target)`: Costs 1 energy point.
    * `takeDamage(amount)`: Reduces Hit Points.
    * `beRepaired(amount)`: Restores Hit Points, costs 1 energy point.

*Note: The robot cannot do anything if it has no hit points or energy points left.*

---

## Exercise 01: Serena, my love!
**Directory:** `ex01/`

Introduction to inheritance. We create a derived robot named **ScavTrap** that inherits from `ClapTrap`.

### Changes and Specifics
* **Inheritance:** `ScavTrap` inherits constructors and destructors from `ClapTrap`.
* **Chaining:** Construction starts with `ClapTrap`, then `ScavTrap`. Destruction occurs in reverse order.
* **New Stats:**
    * `Hit Points`: 100.
    * `Energy Points`: 50.
    * `Attack Damage`: 20.
* **Special Ability:** Adds the `guardGate()` function, which announces that the robot is in "Gate keeper mode".

---

## Exercise 02: Repetitive work
**Directory:** `ex02/`

Creation of a second derived class, the **FragTrap**, which also inherits from `ClapTrap`. This shows how different classes can inherit from the same base with different behaviors.

### Changes and Specifics
* **Construction/Destruction:** Messages displayed must be different from `ScavTrap`.
* **New Stats:**
    * `Hit Points`: 100.
    * `Energy Points`: 100.
    * `Attack Damage`: 30.
* **Special Ability:** Adds the `highFivesGuys()` function, which requests a high five on the standard output.

---

## How to Test

Each exercise has its own `Makefile`.

1.  Enter the exercise directory (e.g., `cd ex00`).
2.  Compile the project:
    ```bash
    make
    ```
3.  Run the executable:
    ```bash
    ./result
    ```