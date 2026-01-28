#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& other);
    const std::string& getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
    Brain& operator=(const Brain& other);
    ~Brain();
};






#endif