#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void test_basic_polymorphism()
{
    std::cout << "\n========== TEST 1: Polymorphisme de Base ==========\n";
    
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << "\nType du dog: " << dog->getType() << std::endl;
    std::cout << "Type du cat: " << cat->getType() << std::endl;
    
    std::cout << "\nSons des animaux:" << std::endl;
    dog->makeSound();
    cat->makeSound();
    
    std::cout << "\nDestruction:" << std::endl;
    delete dog;
    delete cat;
}

void test_array_of_animals()
{
    std::cout << "\n========== TEST 2: Tableau d'Animaux ==========\n";
    
    const int SIZE = 6;
    Animal* animals[SIZE];
    
    std::cout << "\nCréation de " << SIZE << " animaux (moitié dogs, moitié cats):\n";
    
    // Moitié Dogs
    for (int i = 0; i < SIZE / 2; i++)
        animals[i] = new Dog();
    
    // Moitié Cats
    for (int i = SIZE / 2; i < SIZE; i++)
        animals[i] = new Cat();
    
    std::cout << "\nTest des sons:\n";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << animals[i]->getType() << " dit: ";
        animals[i]->makeSound();
    }
    
    std::cout << "\nDestruction de tous les animaux:\n";
    for (int i = 0; i < SIZE; i++)
        delete animals[i];
}

void test_deep_copy()
{
    std::cout << "\n========== TEST 3: Copie Profonde (Deep Copy) ==========\n";
    
    std::cout << "\nCréation du dog original:\n";
    Dog* original = new Dog();
    
    // Modifier quelques idées du dog original
    // (Tu devrais ajouter un getter/setter pour tester ça proprement)
    
    std::cout << "\nCopie du dog (constructeur de copie):\n";
    Dog* copy = new Dog(*original);
    
    std::cout << "\nCréation d'un 3ème dog:\n";
    Dog* assigned = new Dog();
    
    std::cout << "\nAssignation (opérateur =):\n";
    *assigned = *original;
    
    std::cout << "\nVérification: 3 dogs différents existent:\n";
    std::cout << "Original: " << original << std::endl;
    std::cout << "Copy: " << copy << std::endl;
    std::cout << "Assigned: " << assigned << std::endl;
    
    std::cout << "\nDestruction dans l'ordre inverse:\n";
    delete assigned;
    std::cout << "Assigned détruit, original et copy existent toujours\n";
    
    delete copy;
    std::cout << "Copy détruit, original existe toujours\n";
    
    delete original;
    std::cout << "Original détruit\n";
    
    std::cout << "\n✅ Si pas de crash, la copie profonde fonctionne!\n";
}

void test_cat_deep_copy()
{
    std::cout << "\n========== TEST 4: Copie Profonde des Cats ==========\n";
    
    Cat cat1;
    Cat cat2(cat1);
    Cat cat3;
    cat3 = cat1;
    
    std::cout << "\n✅ 3 cats créés et copiés sans crash!\n";
}

void test_subject_example()
{
    std::cout << "\n========== TEST 5: Exemple du Sujet ==========\n";
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j; // Ne doit pas crash
    delete i;
    
    std::cout << "\n✅ Test du sujet passé!\n";
}

int main()
{
    std::cout << "╔════════════════════════════════════════════╗\n";
    std::cout << "║   TESTS COMPLETS - MODULE 04 EXERCICE 01   ║\n";
    std::cout << "╚════════════════════════════════════════════╝\n";
    
    test_basic_polymorphism();
    test_array_of_animals();
    test_deep_copy();
    test_cat_deep_copy();
    test_subject_example();
    
    std::cout << "\n╔════════════════════════════════════════════╗\n";
    std::cout << "║           TOUS LES TESTS TERMINÉS          ║\n";
    std::cout << "║  Vérifie avec valgrind pour les leaks !   ║\n";
    std::cout << "╚════════════════════════════════════════════╝\n";
    
    // Pour vérifier les fuites mémoire:
    // valgrind --leak-check=full ./program
    
    return 0;
}