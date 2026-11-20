#include <iostream>
void modifyArray(int values[], int size) {
    for (int i = 0; i < size; ++i) values[i] *= 2;
}
void modifyElement(int value) {
    value *= 2;
    std::cout << "Inside modifyElement: " << value << '\n';
}
int main() {
    int values[] = {0, 1, 2, 3, 4};
    modifyArray(values, 5);
    for (int value : values) std::cout << value << ' ';
    std::cout << '\n';
    modifyElement(values[3]);
    std::cout << "values[3]: " << values[3] << '\n';
}
