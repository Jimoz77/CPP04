#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat(/* args */);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    ~Cat();
};








#endif