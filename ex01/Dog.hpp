#ifndef __DOG_H__
#define __DOG_H__

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* brain;
public:
    Dog();
    Dog(const Dog& other);
    const std::string& getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    ~Dog();
};







#endif