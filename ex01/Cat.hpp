#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat();
    Cat(const Cat& other);
    const std::string& getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    ~Cat();
};








#endif