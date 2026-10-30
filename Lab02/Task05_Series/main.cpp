#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n,a; cout << "Enter n and digit a (1..9): ";
    if (!(cin >> n >> a) || n<=0 || a<1 || a>9) { cout << "Invalid input\n"; return 1; }
    unsigned long long term=0, sum=0, limit=numeric_limits<unsigned long long>::max();
    for (int i=1; i<=n; ++i) {
        if (term>(limit-a)/10) { cout << "Result exceeds integer range\n"; return 1; }
        term=term*10+a;
        if (sum>limit-term) { cout << "Result exceeds integer range\n"; return 1; }
        sum+=term;
        cout << term << (i==n ? "\n" : " + ");
    }
    cout << "Sum: " << sum << '\n';
}
