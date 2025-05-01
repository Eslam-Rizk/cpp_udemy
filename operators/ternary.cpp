#include <iostream>

int main() {
    int a = 10, b = 20;
    int min = (a < b) ? a : b;  // Ternary operator
    std::cout << "Minimum: " << min << std::endl;
    return 0;
}
