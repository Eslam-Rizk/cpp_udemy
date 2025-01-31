#include <iostream>

void demo() {
    static int x; // Uninitialized, but automatically set to 0
    std::cout << "x = " << x << std::endl;
    x++;  // Modify `x` to see its persistence
}

int main() {
    demo(); // First call: x = 0
    demo(); // Second call: x = 1 (retains value from previous call)
    demo(); // Third call: x = 2
    return 0;
}
