#include <iostream>
#include <utility>
bool ascending(int a, int b) { return a < b; }
bool descending(int a, int b) { return a > b; }
void selectionSort(int* values, int size, bool (*compare)(int, int)) {
    for (int i = 0; i < size - 1; ++i) {
        int selected = i;
        for (int j = i + 1; j < size; ++j) {
            if (compare(values[j], values[selected])) selected = j;
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
    int order;
    std::cout << "Enter 1 for ascending, 2 for descending: ";
    if (!(std::cin >> order) || (order != 1 && order != 2)) return 1;
    selectionSort(values, 10, order == 1 ? ascending : descending);
    show(values, 10);
}
