#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
    virtual Animal() {}
    virtual ~Animal() {}

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getWeight()
    {
        return weight;
    }
    string getSound()
    {
        return sound;
    }

private:
    string name;
    int age;
    double weight;
    string sound;
};