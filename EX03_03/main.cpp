#include <iostream>
#include "EvenNumber.h"

int main()
{
	EvenNumber EV(16);
	std::cout << EV.getNext() << std::endl;
	std::cout << EV.getPrevious() << std::endl;
	return 0;
}