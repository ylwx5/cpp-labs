#include <iostream>
#include <utility>


void selectionSort(int* values, int size) {
    for (int i = 0; i < size - 1; ++i) {
        int selected = i;
        for (int j = i + 1; j < size; ++j) {
            if (values[j] < values[selected]) selected = j;
        }
        std::swap(values[i], values[selected]);
    }
}
void show(const int* values, int size) {
    for (int i = 0; i < size; ++i) std::cout << values[i] << ' ';
    std::cout << '\n';
}
int main() {
    int values[] = {2,6,4,8,10,12,89,68,45,37};
    show(values, 10);
    selectionSort(values, 10);
    show(values, 10);
}
