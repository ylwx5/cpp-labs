#include <iostream>
int main() {
    int value = 0;
    int* p = &value;
    *p = 9;
    std::cout << "the value at p: " << *p << '\n';
}
