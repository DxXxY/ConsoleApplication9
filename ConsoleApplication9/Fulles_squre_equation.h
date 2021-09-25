#pragma once
#include "Roots.h"
class Fulles_squre_equation :
    public Roots
{
public:
    Fulles_squre_equation(double a, double c) {
        this->a = a;
        this->b = 0;
        this->c = c;
    }
    virtual string findRoots();
};

