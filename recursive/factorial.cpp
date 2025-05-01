#include <iostream>
using namespace std;

int factorial(int n)
{
    // track the number of calls
    static int count = 0;
    cout << "\tFactorial called with " << n << endl;
    count++;

    // factorial code
    if (n == 0)
        return 1;                // Base case
    return n * factorial(n - 1); // Recursive case
}

int main()
{
    cout << "Factorial of 5: " << factorial(5) << endl; // Output: 120
    return 0;
}
