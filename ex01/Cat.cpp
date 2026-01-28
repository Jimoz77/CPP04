#include "Cat.hpp"



Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "🐱 A little kitten has been adopted\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = "Cat";
    this->brain = new Brain(*other.brain);
    std::cout << "🐱 A twin little kitten has been adopted\n";

}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "🐱 cat assignment operator\n";
    if(this != &other)
    {
        Animal::operator=(other);
        *this->brain = *other.brain;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "🐱Miaou!🐱\n";
}

const std::string& Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}
void Cat::setIdea(int index, const std::string& idea)
{
    this->brain->setIdea(index, idea);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "🐱A little kitten is going to sleep...\n";
}

