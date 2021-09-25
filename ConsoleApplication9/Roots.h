#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
class Roots
{
	//ax^2+bx+c=0
protected:
	double a, b, c;
public:
	virtual string findRoots() {
		return "Oops , no enquation!";
	}
	void ShowRoots(Roots& root) {
		cout << root.findRoots();
	}

};

