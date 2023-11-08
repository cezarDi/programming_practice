#include <iostream>
#include <cmath>

int main() {
	double a;
	double b;
	double c;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				std::cout << "X in R";
			} 
			else {
				std::cout << "No solution";
			}
		} 
		else {
			std::cout << "X = " << -c / b;
		}
	} 
	else {
		double D;
		D = b * b - 4 * a * c;
		if (D < 0) {
			std::cout << "No solution";
		} else if (D == 0) {
			std::cout << "X = " << -b / 2 / a;
		} else {
			double sq;
			sq = sqrt(D);
			std::cout << "X1 = " << (-b + sq) / 2 / a << "\n";
			std::cout << "X2 = " << (-b - sq) / 2 / a;
		}
	}
	std::cout << "\n";
	return 0;
}