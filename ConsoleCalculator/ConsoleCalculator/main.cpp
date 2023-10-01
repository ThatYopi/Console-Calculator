// Calculator project

#include <iostream>

int getUserInput();

int add(int x, int y);
int take(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
	std::cout << "welcome to my super cool calculator!\n"
		<< "here you can see all kinds of operations among two integers\n";

	int num1{ getUserInput() };
	int num2{ getUserInput() };

	std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << "\n";
	std::cout << num1 << " - " << num2 << " = " << take(num1, num2) << "\n";

	std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << "\n";
	std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << "\n";

	std::cout << "press any key and then enter to close the program\n";
	int exitCode{};
	std::cin >> exitCode;

	return 0;
}