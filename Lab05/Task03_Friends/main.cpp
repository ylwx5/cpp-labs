#include "Friends.h"
#include <iostream>

int main()
{
    X value;
    Y y;
    Z z;
    std::cout << "Initial: " << value.getValue() << '\n';
    y.g(&value);
    std::cout << "After Y::g: " << value.getValue() << '\n';
    z.f(&value);
    std::cout << "After Z::f: " << value.getValue() << '\n';
    h(&value);
    std::cout << "After h: " << value.getValue() << '\n';
}
