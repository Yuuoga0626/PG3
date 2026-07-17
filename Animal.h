#pragma once
#include <iostream>

class Animal
{
public:
    virtual void Speak();

    virtual ~Animal() = default;
};
