#include <iostream>
#include <string>
int countLetters(const std::string& sentence) {
    int count = 0;
    for (unsigned char ch : sentence) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ++count;
    }
    return count;
}
int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << countLetters(sentence) << '\n';
}
