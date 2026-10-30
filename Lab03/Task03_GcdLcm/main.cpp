#include <iostream>
using namespace std;
#include <cstdlib>
long long gcd(int a, int b)
{
    long long x = llabs(static_cast<long long>(a)),
              y = llabs(static_cast<long long>(b));
    while (y)
    {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}
long long lcm(int a, int b)
{
    long long g = gcd(a, b);
    return g == 0 ? 0 : llabs((static_cast<long long>(a) / g) * b);
}
int main()
{
    int a, b;
    if (!(cin >> a >> b))
        return 1;
    cout << "gcd=" << gcd(a, b) << " lcm=" << lcm(a, b) << endl;
}
