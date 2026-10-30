#include <iostream>
#include <string>
using namespace std;
int main() {
    long long value; cout << "Enter an integer: ";
    if (!(cin >> value)) return 1;
    string digits = to_string(value);
    bool palindrome = value >= 0;
    for (size_t i=0; i<digits.size()/2; ++i)
        if (digits[i] != digits[digits.size()-1-i]) palindrome = false;
    cout << (palindrome ? "Palindrome" : "Not a palindrome") << '\n';
}
