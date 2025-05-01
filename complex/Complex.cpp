

#include <iostream>

class Complex
{
    // private attributes
    float real;
    float imag;
    static int count;

    // public methods
public:
    // constructor
    // default constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i)
    {
        std::cout << ++count << " : Complex object created, \"this\":" << this << std::endl;
    };
    ~Complex()
    {
        std::cout << count-- << " : Complex object destroyed, \"this\":" << this << std::endl;
    };
    // setters and getters
    void setReal(float &r);
    void setImag(float &imag);
    float getReal();
    float getImag();
    // operator overloading
    Complex operator+(const Complex &other) const;
    Complex operator-(const Complex &other) const;
    Complex &operator=(const Complex &other);
    // print method
    void print();
};

// Initialize static member
int Complex::count = 0;

void Complex::setReal(float &r)
{
    real = r;
}
float Complex::getReal()
{
    return real;
}
void Complex::setImag(float &i)
{
    imag = i;
}

float Complex::getImag()
{
    return imag;
}

void Complex::print()
{
    std::cout << "(" << real << (imag > 0 ? "+" : "-") << abs(imag) << "i)" << std::endl;
}

Complex Complex::operator+(const Complex &other) const
{
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex &other) const
{
    return Complex(real - other.real, imag - other.imag);
}

Complex &Complex::operator=(const Complex &other) // return by reference to avoid copying and calling 1 more destructor
{
    real = other.real;
    imag = other.imag;
    return *this;
}

int main()
{
    Complex c1(2, 3);
    std::cout << "c1 created" << std::endl;
    Complex c2(4, 5);
    std::cout << "c2 created" << std::endl;
    Complex c3;
    std::cout << "c3 created" << std::endl;
    Complex sum = c1 + c2;
    std::cout << "sum created" << std::endl;
    Complex diff = c1 - c2;
    std::cout << "diff created" << std::endl;
    c3 = c1 = c2;
    std::cout << "assignation 2 times" << std::endl;
    c1.print();
    c2.print();
    c3.print();
    sum.print();
    diff.print();

    // std::cout << "c1 \"this\" pointer is: " << c1.this << std::endl;
    // std::cout << "c2 \"this\" pointer is: " << c2.this << std::endl;
    return 0;
}