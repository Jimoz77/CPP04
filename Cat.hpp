#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"


class Cat : public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void makeSound() const override;
    ~Cat();
};








#endif