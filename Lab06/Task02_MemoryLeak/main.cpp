#include <iostream>
int fn1() {
    int* p = new int(5);
    int result = *p;
    delete p;
    return result;
}
int main() { std::cout << "the value of a is: " << fn1() << '\n'; }
