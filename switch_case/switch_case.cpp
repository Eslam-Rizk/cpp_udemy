#include <iostream>

int main()
{

    // private members and methods to handle them --> Encupsulation
    struct Device
    {
        enum State
        {
            SLEEP, // 0
            READY, // 1
            BAD    // 2
        };
        auto state() const { return m_state; }           // Getter, const return to prevent unintended state change
        void set_state(State state) { m_state = state; } // Setter

    private:
        State m_state{}; // private members
    };

    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    switch (auto dev = Device{}; dev.state())
    { // auto dev = Device{}; --> C++17 init-statement, dev.state() --> switch expression
    case Device::SLEEP:
        std::cout << "device is in sleep mode" << std::endl;
        break;
    case Device::READY:
        std::cout << "device is ready for use" << std::endl;
        break;
    case Device::BAD:
        std::cout << "device is in bad state" << std::endl;
        break;
    }

    auto dev = Device{};
    dev.set_state(Device::READY);

    switch (dev.state())
    { // auto dev = Device{}; --> C++17 init-statement, dev.state() --> switch expression
    case Device::SLEEP:
        std::cout << "device is in sleep mode" << std::endl;
        break;
    case Device::READY:
        std::cout << "device is ready for use" << std::endl;
        break;
    case Device::BAD:
        std::cout << "device is in bad state" << std::endl;
        break;
    }

    //[[fallthrough]] is an attribute introduced in C++17 that explicitly tells the compiler
    // that falling through a case statement in a switch block is intentional.
    // This helps suppress compiler warnings about missing break statements.

    // Key Rules of [[fallthrough]]
    //  It must be placed inside a case block before the next case.
    //  It does not generate code (it is purely for compiler checks).
    //  It cannot be used before break, return, or throw.
    //  It must be followed by another case or default.
    /*
        switch (auto dev = Device{}; dev.state())
        { // auto dev = Device{}; --> C++17 init-statement, dev.state() --> switch expression
        case Device::SLEEP:
            std::cout << "device is in sleep mode" << std::endl;
            // no break
        case Device::READY:
            std::cout << "device is ready for use" << std::endl;
            [[fallthrough]]; //// Explicitly indicates fallthrough to stop compiler warning
        case Device::BAD:
            std::cout << "device is in bad state" << std::endl;
            break;
        }
    */
    // std::cin.get(); //close when ENTER is pressed
    return 0;
}