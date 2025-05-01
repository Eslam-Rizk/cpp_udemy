#include <iostream>
#include <vector>

/*
    Size of char: 1 bytes
    Size of char: 1 bytes        
    Size of short: 2 bytes       
    Size of int: 4 bytes
    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of long double: 16 bytes
    Size of long: 4 bytes
    Size of long long: 8 bytes
    Size of char arr 1: 2 bytes
    Size of char arr 2: 4 bytes
    Size of string 3: 32 bytes
    Size of string 4: 32 bytes
    Size of vector 1: 24 bytes
    s
    */

int main()
{
    char c = 'a';
    short s = 4;
    int a = 10;
    float f = 12.3;
    double d = 12.3456789;
    long double ld = 12.3456789;
    long l {1'000'000'000};             //does bounds checking, ' in 1'000'000'000 used since c++14 to read large numbers easily
    long long ll = 5'200'000'000;       //does not do bounds checking
    char str1[] = "s";
    char str2[] = "str";
    std::string str3 = "s";
    std::string str4 = "str";
    std::vector<char> vec1(str1, str1 + sizeof(str1));
    //cout variables
    std::cout << "Value of char: " << c << "\n";
    std::cout << "Value of short: " << s << "\n";
    std::cout << "Value of int: " << a << "\n";
    std::cout << "Value of float: " << f << "\n";
    std::cout << "Value of double: " << d << "\n";
    std::cout << "Value of long double: " << ld << "\n"; // 12.3456789
    std::cout << "Value of long: " << l << "\n";
    std::cout << "Value of long long: " << ll << "\n";
    std::cout << "Value of char arr 1: " << str1 << "\n"; // s
    std::cout << "Value of char arr 2: " << str2 << "\n"; // str
    std::cout << "Value of char arr 3: " << str3 << "\n";
    std::cout << "Value of char arr 4: " << str4 << "\n";
    std::cout << "Value of vector 1: " << vec1.at(0) << "\n"; // s

    // cout variables sizes
    std::cout << "Size of char: " << sizeof(c) << " bytes\n";
    std::cout << "Size of short: " << sizeof(s) << " bytes\n";
    std::cout << "Size of int: " << sizeof(a) << " bytes\n";
    std::cout << "Size of float: " << sizeof(f) << " bytes\n";
    std::cout << "Size of double: " << sizeof(d) << " bytes\n";
    std::cout << "Size of long double: " << sizeof(ld) << " bytes\n"; // 16 bytes in C++
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

    //overflow example
    short x{30000};
    short y{30000};
    short z = x * y;
    std::cout << "Overflow example: z = " << z << "\n"; // z is -5888, because of integer overflow
    std::cout << "Should've been z= " << x*y << "\n";   //900'000'000
    
}