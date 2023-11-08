#include <iostream>

int main() {
	double a;
	double b;
	double c;
	double d;
	double x;
	std::cout << "Enter number a: ";
	std::cin >> a;
	std::cout << "Enter number b: ";
	std::cin >> b;
	std::cout << "Enter number c: ";
	std::cin >> c;
	std::cout << "Enter number d: ";
	std::cin >> d;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Corresponding image: " << ((x - a) * (d - c) / (b - a)) + c << "\n";
	return 0;
}