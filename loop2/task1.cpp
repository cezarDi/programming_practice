#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += 1.0 / i;
    }
    std::cout << s << '\n';
    return 0;
}