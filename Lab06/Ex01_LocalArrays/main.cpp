#include <iostream>
void staticArrayInit() {
    static int values[3];
    for (int& value : values) std::cout << value << ' ';
    std::cout << "-> ";
    for (int& value : values) { value += 5; std::cout << value << ' '; }
    std::cout << '\n';
}
void automaticArrayInit() {
    int values[3] = {1, 2, 3};
    for (int value : values) std::cout << value << ' ';
    std::cout << "-> ";
    for (int& value : values) { value += 5; std::cout << value << ' '; }
    std::cout << '\n';
}
int main() {
    for (int call = 1; call <= 2; ++call) {
        std::cout << "Call " << call << "\nstatic: ";
        staticArrayInit();
        std::cout << "automatic: ";
        automaticArrayInit();
    }
}
