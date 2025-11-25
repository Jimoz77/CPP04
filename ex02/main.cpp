#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    Animal* dog = new Dog();     // ✅ OK
    Animal* cat = new Cat();     // ✅ OK
    dog->makeSound();            // ✅ OK (son du chien)
    cat->makeSound();

    Animal* animals[4];          // ✅ OK (tableau de pointeurs)
    for(int i = 0; i < 4; i++)
        animals[i] = new Dog();  // ✅ OK
    for(int i = 0; i < 4; i++)
        animals[i]->makeSound();

    //Animal* generic = new Animal();  // ❌ ERREUR de compilation !
    //Animal stack_animal;             // ❌ ERREUR de compilation !
    //generic->makeSound();
    //stack_animal.makeSound();
}