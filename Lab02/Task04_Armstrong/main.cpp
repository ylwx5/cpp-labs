#include <iostream>
using namespace std;
int main() {
    int value; cout << "Enter a three-digit integer: ";
    if (!(cin >> value) || value < 100 || value > 999) { cout << "Invalid input\n"; return 1; }
    int a=value/100, b=value/10%10, c=value%10;
    cout << (value == a*a*a+b*b*b+c*c*c ? "Armstrong number\n" : "Not an Armstrong number\n");
    cout << "All three-digit Armstrong numbers: ";
    for (int n=100; n<=999; ++n) {
        a=n/100; b=n/10%10; c=n%10;
        if (n==a*a*a+b*b*b+c*c*c) cout << n << ' ';
    }
    cout << '\n';
}
