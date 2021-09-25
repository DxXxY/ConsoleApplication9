using namespace std;
#include <iostream>
#include "line_equation.h"
#include "Fulles_squre_equation.h"
#include "Full_squre_equation.h"
#include "Roots.h"



int main()
{
    line_equation p1(1, 3);
    Fulles_squre_equation p(1, -25);
    Full_squre_equation p2(2,5,2);
    Roots().ShowRoots(p1); cout << endl;
    Roots().ShowRoots(p); cout << endl;
    Roots().ShowRoots(p2); cout << endl;
}
