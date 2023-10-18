#include <iostream>
#include <cmath>


int main() {
	double x;
	double y;
	double R;
	double r;
	std::cout << "Enter the coordinate x of Point: ";
	std::cin >> x;
	std::cout << "Enter the coordinate y of Point: ";
	std::cin >> y;
	std::cout << "Enter R = ";
	std::cin >> R;
	std::cout << "Enter r = ";
	std::cin >> r;
	long double square = (long double)x * x + y * y;
	if (square >= r * r && square <= R * R) {
		std::cout << "The point in the ring";
	} else {
		std::cout << "The point outside the ring";
	}
	std::cout << "\n";
	return 0;
}