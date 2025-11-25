#include "Cat.hpp"


Cat::Cat(/* args */)
{
    this->type = "Cat";
    std::cout << "🐱 A little kitten has been adopted\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = "Cat";
    std::cout << "🐱 A twin little kitten has been adopted\n";

}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "🐱 cat assignment operator\n";
    if(this != &other)
    {
        Animal::operator=(other);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "🐱Miaou!🐱\n";
}

Cat::~Cat()
{
    std::cout << "🐱A little kitten is going to sleep...\n";
}

