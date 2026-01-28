# C++ Module 03 - Inheritance

[cite_start]This project aims to introduce Object-Oriented Programming in C++, specifically focusing on the concept of **inheritance**[cite: 12].

## General Rules
* [cite_start]**Language:** C++98[cite: 14].
* [cite_start]**Compilation:** `c++ -Wall -Wextra -Werror -std=c++98`[cite: 21].
* [cite_start]**Style:** Classes must be designed in the **Orthodox Canonical Form** (Default Constructor, Copy Constructor, Assignment Operator, Destructor)[cite: 50].
* [cite_start]**Memory:** No memory leaks are tolerated[cite: 49].

---

## Exercise 00: Aaaaand... OPEN!
**Directory:** `ex00/`

[cite_start]The goal is to implement a base class representing a robot: **ClapTrap**[cite: 126].

### Features
The `ClapTrap` class has private attributes and public member functions to simulate behavior:
* **Attributes:**
    * [cite_start]`Name` (passed as a parameter to the constructor)[cite: 127].
    * [cite_start]`Hit Points` (10): Represents health[cite: 128].
    * [cite_start]`Energy Points` (10)[cite: 129].
    * [cite_start]`Attack Damage` (0)[cite: 130].
* **Actions:**
    * [cite_start]`attack(target)`: Costs 1 energy point[cite: 136].
    * [cite_start]`takeDamage(amount)`: Reduces Hit Points[cite: 133].
    * [cite_start]`beRepaired(amount)`: Restores Hit Points, costs 1 energy point[cite: 136].

[cite_start]*Note: The robot cannot do anything if it has no hit points or energy points left[cite: 137].*

---

## Exercise 01: Serena, my love!
**Directory:** `ex01/`

Introduction to inheritance. [cite_start]We create a derived robot named **ScavTrap** that inherits from `ClapTrap`[cite: 157, 158].

### Changes and Specifics
* [cite_start]**Inheritance:** `ScavTrap` inherits constructors and destructors from `ClapTrap`[cite: 158].
* **Chaining:** Construction starts with `ClapTrap`, then `ScavTrap`. [cite_start]Destruction occurs in reverse order[cite: 161].
* **New Stats:**
    * [cite_start]`Hit Points`: 100[cite: 164].
    * [cite_start]`Energy Points`: 50[cite: 165].
    * [cite_start]`Attack Damage`: 20[cite: 166].
* [cite_start]**Special Ability:** Adds the `guardGate()` function, which announces that the robot is in "Gate keeper mode"[cite: 168, 169].

---

## Exercise 02: Repetitive work
**Directory:** `ex02/`

Creation of a second derived class, the **FragTrap**, which also inherits from `ClapTrap`. [cite_start]This shows how different classes can inherit from the same base with different behaviors[cite: 181].

### Changes and Specifics
* [cite_start]**Construction/Destruction:** Messages displayed must be different from `ScavTrap`[cite: 182].
* **New Stats:**
    * [cite_start]`Hit Points`: 100[cite: 186].
    * [cite_start]`Energy Points`: 100[cite: 187].
    * [cite_start]`Attack Damage`: 30[cite: 188].
* [cite_start]**Special Ability:** Adds the `highFivesGuys()` function, which requests a high five on the standard output[cite: 190, 191].

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