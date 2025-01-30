#include <iostream>
#include <vector>

int main()
{
    char c = 'a';
    short s = 4;
    int a = 10;
    float f = 12.3;
    double d = 12.3456789;
    long l = 100;
    long long ll = 1000;
    char str1[] = "s";
    char str2[] = "str";
    std::string str3 = "s";
    std::string str4 = "str";
    std::vector<char> vec1(str1, str1 + sizeof(str1));

    // cout variables sizes
    std::cout << "Size of char: " << sizeof(c) << " bytes\n";
    std::cout << "Size of short: " << sizeof(s) << " bytes\n";
    std::cout << "Size of int: " << sizeof(a) << " bytes\n";
    std::cout << "Size of float: " << sizeof(f) << " bytes\n";
    std::cout << "Size of double: " << sizeof(d) << " bytes\n";
    std::cout << "Size of long: " << sizeof(l) << " bytes\n";
    std::cout << "Size of long long: " << sizeof(ll) << " bytes\n";
    std::cout << "Size of char arr 1: " << sizeof(str1) << " bytes\n"; // 4 bytes in C++
    std::cout << "Size of char arr 2: " << sizeof(str2) << " bytes\n"; // 4 bytes in C++
    std::cout << "Size of string 3: " << sizeof(str3) << " bytes\n";   // 24 bytes : size of a string is constant beacause its an object
    std::cout << "Size of string 4: " << sizeof(str4) << " bytes\n";
    std::cout << "Size of vector 1: " << sizeof(vec1) << " bytes\n"; // 12 bytes :size of a vector is constant beacause its an object
    // cout vec1 content
    for (const char &ch : vec1)
        std::cout << ch;
    std::cout << "\n";
    /*
    Size of char: 1 bytes
Size of short: 2 bytes
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long: 4 bytes
Size of long long: 8 bytes
Size of char arr 1: 2 bytes
Size of char arr 2: 4 bytes
Size of string 3: 24 bytes
Size of string 4: 24 bytes
Size of vector 1: 12 bytes
s
    */
}