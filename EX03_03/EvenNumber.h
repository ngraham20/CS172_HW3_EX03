#pragma once

class EvenNumber
{
public:

	EvenNumber();
	EvenNumber(int);

	int getValue();
	int getNext();
	int getPrevious();

private:

	int value;
};