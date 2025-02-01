#include <iostream>

int age{18};
int main(){
    int age{16};
    std::cout << age << std::endl; //16 -> local scope first
return 0;
}