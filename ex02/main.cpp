#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    // 1. Création simple
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    
    dog->makeSound();
    cat->makeSound();

    // 2. Création Tableau
    Animal* animals[4];
    for(int i = 0; i < 4; i++)
        animals[i] = new Dog();
    
    for(int i = 0; i < 4; i++)
        animals[i]->makeSound();

    std::cout << "\n--- Nettoyage ---" << std::endl;
    
    delete dog;
    delete cat;

    for(int i = 0; i < 4; i++)
        delete animals[i];
    
    // Preuve que Animal est abstraite
    // Animal test;
        
    return 0;
}