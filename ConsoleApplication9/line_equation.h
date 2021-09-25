#pragma once
#include "Roots.h"
class line_equation :
    public Roots
{
public:
    line_equation(double b, double c) {
        this->a = 0;
        this->b = b;
        this->c = c;
    }

    virtual string findRoots();
};

