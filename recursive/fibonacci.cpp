/*#include <iostream>
using namespace std;

/*
fibonacci(6) call No. 1
fibonacci(5) call No. 2
|   fibonacci(4) call No. 3
|   |   fibonacci(3) call No. 4
|   |   |   fibonacci(2) call No. 5
|   |   |   |   fibonacci(1) call No. 6
|   |   |   |   fibonacci(0) call No. 7
|   |   |   fibonacci(1) call No. 8
|   |   fibonacci(2) call No. 9
|   |   |   fibonacci(1) call No. 10
|   |   |   fibonacci(0) call No. 11
|   fibonacci(3) call No. 12
|   |   fibonacci(2) call No. 13
|   |   |   fibonacci(1) call No. 14
|   |   |   fibonacci(0) call No. 15
|   |   fibonacci(1) call No. 16
fibonacci(4) call No. 17
|   fibonacci(3) call No. 18
|   |   fibonacci(2) call No. 19
|   |   |   fibonacci(1) call No. 20
|   |   |   fibonacci(0) call No. 21
|   |   fibonacci(1) call No. 22
|   fibonacci(2) call No. 23
|   |   fibonacci(1) call No. 24
|   |   fibonacci(0) call No. 25
Fibonacci(6): 8
* /
int fibonacci(int n, int level = 0)
{
    static int count = 0;

    // Print the indentation for the current level and the function call
    for (int i = 0; i < level - 1; i++)
    {
        cout << "|   "; // Indentation for recursive level
    }
    cout << "fibonacci(" << n << ") call No. " << ++count << endl;

    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive case
    int result = fibonacci(n - 1, level + 1) + fibonacci(n - 2, level + 1);
    return result;
}

int main()
{
    int n = 6;
    int result = fibonacci(n); // Output: 8
    cout << "Fibonacci(" << n << "): " << result << endl;
    return 0;
}
*/

#include <iostream>
#include <vector>
using namespace std;


int fibonacci_2(int n, int level = 0)
{
    static int count = 0;

    // Print the indentation for the current level and the function call
    for (int i = 0; i < level - 1; i++)
    {
        cout << "|   "; // Indentation for recursive level
    }
    cout << "fibonacci(" << n << ") call No. " << ++count << endl;

    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive case
    int result = fibonacci_2(n - 1, level + 1) + fibonacci_2(n - 2, level + 1);
    return result;
}

// Memoization version of Fibonacci
//optimized version of Fibonacci
int fibonacci_1(int n, std::vector<int> &memo, int level = 0)
{
    static int count = 0;
    // Print the indentation for the current level and the function call
    for (int i = 0; i < level - 1; i++)
    {
        cout << "|   "; // Indentation for recursive level
    }
    cout << "fibonacci(" << n << ") call No. " << ++count << endl;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (memo[n] != -1)
        return memo.at(n); // Check if already computed

    return memo.at(n) = fibonacci_1(n - 1, memo, level + 1) + fibonacci_1(n - 2, memo, level + 1);
}

int main()
{
    int n = 6;
    std::vector<int> memo(n+1, -1);
    cout << "Fibonacci(" << n << ") = " << fibonacci_1(n, memo) << endl;
    cout << "Fibonacci(" << n << ") = " << fibonacci_2(n) << endl;
    return 0;
}
