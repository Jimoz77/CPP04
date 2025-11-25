#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    ~Dog();
};







#endif