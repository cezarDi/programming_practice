#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double s = 0;
    for (int i = 0; i <= n; i++) {
        s += 1.0 / (1 << i);
    }
    std::cout << s << '\n';
    return 0;
}