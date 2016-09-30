#include <iostream>
#include <string>
#include <algorithm>

std::string sort(std::string&);

int main()
{
	std::string word;
	std::cout << "Please enter a word:\n>>";
	std::cin >> word;
	std::cout << sort(word) << std::endl;

	return 0;
}

std::string sort(std::string& s)
{
	std::sort(s.begin(), s.end());

	return s;
}