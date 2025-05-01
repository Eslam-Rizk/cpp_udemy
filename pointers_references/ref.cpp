#include <iostream>

int main()
{
    int x{10};
    int &x_ref = x;
    int &&num_ref = 5;

    std::cout << "x value: " << x << std::endl;                // 10
    std::cout << "x address: " << &x << std::endl;             // 0x5ffe8c
    std::cout << "x_ref value: " << x_ref << std::endl;        // 10
    std::cout << "x_ref address: " << &x_ref << std::endl;     // 0x5ffe8c
    std::cout << "num_ref value: " << num_ref << std::endl;    // 5
    std::cout << "num_ref address: " << &num_ref << std::endl; // 0x5ffe88

    num_ref = 7;
    std::cout << "num_ref value: " << num_ref << std::endl;    // 7
    std::cout << "num_ref address: " << &num_ref << std::endl; // 0x5ffe88
    return 0;
}