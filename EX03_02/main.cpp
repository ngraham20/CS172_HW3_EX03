#include <iostream>
#include "QuadraticEquation.h"

int main()
{
	int a;
	int b;
	int c;
	std::cout << "A:\n>>";
	std::cin >> a;
	std::cout << "B:\n>>";
	std::cin >> b;
	std::cout << "C:\n>>";
	std::cin >> c;

	QuadraticEquation QE(a, b, c);

	if (QE.getDiscriminant() > 0)
	{
		std::cout << QE.getRoot1() << std::endl << QE.getRoot2() << std::endl;
	}
	else if (QE.getDiscriminant() == 0)
	{
		std::cout << QE.getRoot1() << std::endl;
	}
	else
	{
		std::cout << "The equation has no real roots\n";
	}

	return 0;
}