#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* brain;
public:
    Dog(/* args */);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    ~Dog();
};







#endif