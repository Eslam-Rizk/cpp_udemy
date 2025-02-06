// code expample for inline functions in c++

#include <iostream>

inline int add(int a, int b) { return a + b; }

int main()
{
    int x = 10, y = 20;
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;
    return 0;
}