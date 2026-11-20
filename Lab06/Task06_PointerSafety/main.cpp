#include <iostream>
#include <cstring>
int main() {
    int values[] = {1,2,3};
    double value = 5;
    unsigned char bytes[sizeof(value)];
    std::memcpy(bytes, &value, sizeof(value));
    std::cout << "double representation bytes: " << sizeof(bytes) << '\n';
    values[0] = static_cast<int>(value);
    for (int item : values) std::cout << item << ' ';
    std::cout << '\n';
}
