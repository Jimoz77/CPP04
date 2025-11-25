#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
};






#endif