#include "Full_squre_equation.h"

string Full_squre_equation::findRoots()
{
    double x1, x2, D;
    D = sqrt(b * b - 4 * a * c);
    x1 = (-b + D) / 2 * a;
    x2 = (-b - D) / 2 * a;
    return "x1: " + to_string(x1)+" " + "x2: " + to_string(x2);
}
