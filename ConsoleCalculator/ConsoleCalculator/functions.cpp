#include <iostream>

int getUserInput()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	return x;
}

int add(int x, int y)
{
	return x + y;
}

int take(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}