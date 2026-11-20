#include <iostream>
void printArray(const int values[], int size) {
    for (int i = 0; i < size; ++i) std::cout << values[i] << ' ';
    std::cout << '\n';
}
int main() {
    int values[] = {10, 20, 30};
    printArray(values, 3);
    printArray(values, 3);
}
