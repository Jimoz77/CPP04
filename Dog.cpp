#include "Dog.hpp"




Dog::Dog(/* args */)
{
    this->type = "Dog";
    std::cout << "🐕A doggo has been adopted\n";
}

Dog::Dog(const Dog& other)
{
    *this = other;
    std::cout << "🐕A twin doggo has been adopted\n";
}


void Dog::makeSound() const
{
    std::cout << "🐕Wouaff!🐕\n";
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "🐕 Dog assignment operator\n";
    if(this != &other)
    {
        Animal::operator=(other);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "🐕A doggo is going to sleep...\n";
}