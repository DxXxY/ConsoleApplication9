#include "Fulles_squre_equation.h"

string Fulles_squre_equation::findRoots()
{
    if (c == abs(c)) {
        return "No roots!";
    }
    else return "x1: " + to_string(sqrt(-(c))) + " " + "x2: " + to_string(-(sqrt(-(c))));
}
