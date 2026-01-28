#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[ANIMAL CREATED]\n";
    this->type = "Weird creature";
}

Animal::Animal(const Animal& other)
{
    std::cout << "[ANIMAL COPY CREATED]\n";
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "[ANIMAL ASSIGNMENT]\n";
    if(this != & other)
        this->type = other.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}


Animal::~Animal()
{
    std::cout << "[ANIMAL REMOVED]\n";
}