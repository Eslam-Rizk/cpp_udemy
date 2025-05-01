#include <iostream>
void display(){
    std::cout << "Hi" << std::endl;
}
int main()
{

    int &&num_ref = 7;
    // std::cout << "num_ref value: " << num_ref << std::endl;    // 7
    // std::cout << "num_ref address: " << &num_ref << std::endl; // 0x5ffe94

    display();

    num_ref++;
    // std::cout << "num_ref value: " << num_ref << std::endl;    // 8
    // std::cout << "num_ref address: " << &num_ref << std::endl; // 0x5ffe88
    return 0;
}