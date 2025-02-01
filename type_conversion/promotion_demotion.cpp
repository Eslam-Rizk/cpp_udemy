#include <iostream>
using namespace std;

int main()
{
    int intValue = 10;
    float floatValue = intValue + 2.0;      // Implicit promotion (int → float)
    double doubleValue = floatValue * 3.33; // Implicit promotion (float → double)

    cout << "intValue (int): " << intValue << endl;
    cout << "intValue size: " << sizeof(intValue) << " bytes" << endl;
    cout << "floatValue (float): " << floatValue << endl;
    cout << "floatValue size: " << sizeof(floatValue) << " bytes" << endl; // 4 bytes (32 bits) on most systems
    cout << "doubleValue (double): " << doubleValue << endl;
    cout << "doubleValue size: " << sizeof(doubleValue) << " bytes" << endl; // 8 bytes (64 bits) on most systems

    intValue = doubleValue;
    cout << "intValue (int after conversion): " << intValue << endl;
    cout << "intValue size: " << sizeof(intValue) << " bytes" << endl; // 4 bytes (32 bits) on most systems

    return 0;
}
