#include <iostream>
void print(const int* values, int size) {
    for (int i = 0; i < size; ++i) std::cout << values[i] << ' ';
    std::cout << '\n';
}
int main() {
    int values[] = {1,2,3,4,5,6};
    print(values, 6);
    int x = 5, y = 9;
    const int* readOnly = &x;
    readOnly = &y;
    int* const fixed = &x;
    *fixed = 7;
    const int* const both = &x;
    std::cout << *readOnly << ' ' << *fixed << ' ' << *both << '\n';
}
