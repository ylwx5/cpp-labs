#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int d = 2; d <= n / d; ++d)
        if (n % d == 0)
            return false;
    return true;
}
int main()
{
    int n;
    if (!(cin >> n))
        return 1;
    cout << (isPrime(n) ? "prime" : "not prime") << endl;
}
