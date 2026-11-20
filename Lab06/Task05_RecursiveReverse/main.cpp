#include <iostream>
#include <string>
#include <utility>
void reverseRange(std::string& s, std::size_t left, std::size_t right) {
    if (left >= right) return;
    std::swap(s[left], s[right]);
    reverseRange(s, left + 1, right - 1);
}
void reverse(std::string& s) {
    if (!s.empty()) reverseRange(s, 0, s.size() - 1);
}
int main() {
    std::string s;
    std::getline(std::cin, s);
    reverse(s);
    std::cout << s << '\n';
}
