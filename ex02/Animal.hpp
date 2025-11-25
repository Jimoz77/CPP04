#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>


class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~Animal();
};






#endif