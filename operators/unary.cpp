#include <iostream>

int main() {
    int a = 5;
    std::cout << "Unary minus: " << -a << std::endl;
    std::cout << "Prefix increment: " << ++a << std::endl;
    std::cout << "Postfix increment: " << a++ << std::endl;
    std::cout << "Logical NOT: " << !a << std::endl;
    return 0;
}
