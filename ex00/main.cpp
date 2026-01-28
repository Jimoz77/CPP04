#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "=== TEST 1: Polymorphisme CORRECT (avec virtual) ===" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        std::cout << "\n--- Types ---" << std::endl;
        std::cout << "j type: " << j->getType() << std::endl;
        std::cout << "i type: " << i->getType() << std::endl;
        
        std::cout << "\n--- Sounds (polymorphisme dynamique) ---" << std::endl;
        i->makeSound(); // Appellera Cat::makeSound() grâce à virtual
        j->makeSound(); // Appellera Dog::makeSound() grâce à virtual
        meta->makeSound(); // Appellera Animal::makeSound()
        
        std::cout << "\n--- Destruction ---" << std::endl;
        delete meta;
        delete j;
        delete i;
    }

    std::cout << "\n\n=== TEST 2: Polymorphisme INCORRECT (sans virtual) ===" << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* wrongCat = new WrongCat();
        
        std::cout << "\n--- Type ---" << std::endl;
        std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
        
        std::cout << "\n--- Sound (liaison statique) ---" << std::endl;
        wrongCat->makeSound(); // Appellera WrongAnimal::makeSound()
        
        std::cout << "\n--- Destruction ---" << std::endl;
        delete meta;
        delete wrongCat;
    }

    std::cout << "\n\n=== TEST 3: Appel direct (pas via pointeur) ===" << std::endl;
    {
        WrongCat directWrongCat;
        std::cout << "\n--- Sound (appel direct) ---" << std::endl;
        directWrongCat.makeSound(); //appellera WrongCat::makeSound()
    }

    std::cout << "\n\n=== TEST 4: Constructeurs de copie ===" << std::endl;
    {
        Dog dog1;
        Dog dog2(dog1);
        
        Cat cat1;
        Cat cat2 = cat1;
    }

    std::cout << "\n\n=== TEST 5: Opérateurs d'assignation ===" << std::endl;
    {
        Dog dog1;
        Dog dog2;
        dog2 = dog1;
    }

    return 0;
}