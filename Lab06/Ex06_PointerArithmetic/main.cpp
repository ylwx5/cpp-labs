#include <iostream>
int main() {
    short scores[] = {84,65,77,60,88,86,92,93,70,66};
    short* first = scores;
    ++first;
    std::cout << "short increment: " << first - scores << " value=" << *first << '\n';
    --first;
    std::cout << "short decrement: " << first - scores << " value=" << *first << '\n';
    std::cout << "short difference: " << (scores + 4) - first << '\n';
    long values[] = {84,65,77,60,88};
    long* current = values;
    ++current;
    std::cout << "long step bytes: " << sizeof(*current) << '\n';
    --current;
    std::cout << "long difference: " << (values + 2) - current << '\n';
}
