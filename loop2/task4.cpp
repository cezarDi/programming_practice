#include <iostream>
#include <cmath>

int main() {
    double eps;
    std::cin >> eps;
    double pi = 0.0;
    double value = 1.0;
    int N = 0;
    double val = 1.0 / value;
    while (std::fabs(val) >= eps) {
        pi += val;
        value = fabs(value) + 2;
        value *= (N % 2 == 0 ? -1 : 1);
        val = 1.0 / value;
        N++;
    }
    pi *= 4;
    std::cout << "PI = " << pi << "\n";
    std::cout << "N = " << N << '\n';
    return 0;
}