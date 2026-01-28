#include "Brain.hpp"

Brain::Brain()
{

}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}
const std::string& Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return ideas[0];
}
void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
Brain::~Brain()
{

}