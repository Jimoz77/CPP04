#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "[WRONG ANIMAL CREATED]\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "[WRONG ANIMAL COPY CREATED]\n";
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "[WRONG ANIMAL ASSIGNMENT]\n";
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WRONG ANIMAL REMOVED]\n";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound (Boooo!)\n";
}