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
    std::cout << "\n========== TEST 3: Preuve Copie Profonde ==========\n";
    
    Dog* original = new Dog();
    original->setIdea(0, "J'aime les os");
    
    Dog* copy = new Dog(*original);
    
    std::cout << "Original a l'idée : " << original->getIdea(0) << std::endl;
    std::cout << "La copie a l'idée : " << copy->getIdea(0) << std::endl;
    
    std::cout << "\n--- MODIFICATION de l'original ---" << std::endl;
    original->setIdea(0, "J'aime dormir"); // On change l'original
    
    std::cout << "Original a l'idée : " << original->getIdea(0) << std::endl;
    std::cout << "La copie a l'idée : " << copy->getIdea(0) << std::endl;
    
    if (copy->getIdea(0) == "J'aime les os")
        std::cout << "✅ SUCCÈS : La copie a gardé son ancienne idée (Deep Copy) !\n";
    else
        std::cout << "❌ ÉCHEC : La copie a été modifiée (Shallow Copy) !\n";

    delete original;
    delete copy;
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
    
    delete j;
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