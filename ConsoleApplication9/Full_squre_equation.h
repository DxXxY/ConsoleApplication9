#pragma once
#include "Roots.h"
class Full_squre_equation :
    public Roots
{
public:
    Full_squre_equation(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    virtual string findRoots();

};

