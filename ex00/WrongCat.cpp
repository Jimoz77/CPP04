#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat created\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    this->type = "WrongCat";
    std::cout << "WrongCat copy created\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat assigned\n";
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed\n";
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat ignores you (Meow? No!)\n";
}