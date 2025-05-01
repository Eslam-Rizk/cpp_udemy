#include <iostream>

int main()
{
    int a = 10, b = 3;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Bitwise AND: " << (a & b) << std::endl;
    std::cout << "Logical AND: " << (a > 5 && b < 5) << std::endl;
    return 0;
}
