#include <iostream>
#include <cmath>

int main() {
    int n;
    double x;
    std::cin >> n >> x;
    double s = 0;
    double sin_value = sin(x);
    for (int i = 1; i <= n; i++) {
        s += sin_value;
        sin_value = sin(sin_value);
    }
    std::cout << s << "\n";
    return 0;
}