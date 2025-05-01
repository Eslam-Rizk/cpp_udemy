#include <iostream>
#include <cstddef>

class Stack
{
    int *st;
    int tos;
    int size;
    static int count;

public:
    Stack(int n = 10);
    ~Stack();
    Stack(const Stack &other);
    Stack &operator=(const Stack &other);
    bool push(float value);
    float pop(); // return type changed to float
    bool isEmpty() const;
    bool isFull() const;
    void traverse(void (*pf)(float)) const;
};
int Stack::count = 0;
Stack::Stack(int n)
{
    std::cout << "constructor called: " << ++count << std::endl;
    size = n;
    tos = 0;
    st = new int[size];
}
Stack &Stack::operator=(const Stack &other)
{
    std::cout << "operator = overloading called" << std::endl;
    delete[] st;
    size = other.size;
    tos = other.tos;
    st = new int[size];
    for (int i = 0; i < tos; i++)
        st[i] = other.st[i];
    return *this;
}
Stack::~Stack()
{
    std::cout << "destructor called: " << count-- << std::endl;
    delete[] st;
}
bool Stack::push(float value)
{
    if (tos == size)
        return false;
    st[tos++] = value;
    return true;
}
float Stack::pop()
{
    if (tos == 0) // if stack is empty
        return false;
    return st[--tos];
}

bool Stack::isEmpty() const
{
    return tos == 0;
}

bool Stack::isFull() const
{
    return tos == size;
}

void Stack::traverse(void (*pf)(float)) const
{
    for (int i = 0; i < tos; i++)
        pf(st[i]);
}

void print(float value)
{
    std::cout << value << " ";
}

int main()
{
    Stack s1(10);
    Stack s2(10);
    s1.push(1.1);
    s1.push(2.2);
    s1.push(3.3);
    s1.push(4.4);
    s1.push(5.5);

    std::cout << "Stack s1: ";
    s1.traverse(print);
    std::cout << std::endl;

    s2 = s1; // operator = overloading called
    std::cout << "Stack s2: ";
    s2.traverse(print);
    std::cout << std::endl;

    return 0;
}
