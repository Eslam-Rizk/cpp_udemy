#include <iostream>

int main(){
    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    struct Device
    {
        enum State { SLEEP, READY, BAD };
        auto state() const { return m_state; }
  
    private:
        State m_state{};
    };
 
    switch (auto dev = Device{}; dev.state())
    {
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
}