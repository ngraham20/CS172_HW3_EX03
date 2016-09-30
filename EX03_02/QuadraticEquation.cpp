#include "QuadraticEquation.h"
#include <cmath>

QuadraticEquation::QuadraticEquation(int A, int B, int C)
{
	a = A;
	b = B;
	c = C;
}

int QuadraticEquation::getA() { return a; }

int QuadraticEquation::getB() { return b; }

int QuadraticEquation::getC() { return c; }

double QuadraticEquation::getDiscriminant() { return std::pow(b,2) - 4*a*c; }

double QuadraticEquation::getRoot1()
{
	if (getDiscriminant() >= 0)
	{
		double r = (-b + sqrt(getDiscriminant() / 2 * a));
		return r;
	}
	else
	{
		return 0;
	}
}

double QuadraticEquation::getRoot2()
{
	if (getDiscriminant() >= 0)
	{
		double r = (-b - sqrt(getDiscriminant() / 2 * a));
		return r;
	}
	else
	{
		return 0;
	}
}
