#pragma once

class QuadraticEquation
{
public:

	QuadraticEquation(int, int, int);
	int getA();
	int getB();
	int getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
private:

	int a;
	int b;
	int c;
};