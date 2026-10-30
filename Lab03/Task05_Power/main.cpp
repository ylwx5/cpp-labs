#include <iostream>
using namespace std;
#include <cmath>
#include <limits>
#include <stdexcept>
int checkedMultiply(int a, int b)
{
    long long p = static_cast<long long>(a) * b;
    if (p < std::numeric_limits<int>::min() ||
        p > std::numeric_limits<int>::max())
        throw overflow_error("Integer overflow");
    return static_cast<int>(p);
}
int getPower(int x, int y)
{
    if (y < 0)
        return 0;
    if (y == 0)
        return 1;
    int half = getPower(x, y / 2);
    int result = checkedMultiply(half, half);
    return y % 2 ? checkedMultiply(result, x) : result;
}
double getPower(double x, int y)
{
    if (y == 0)
        return 1.0;
    if (y < 0)
    {
        if (x == 0)
            throw domain_error("Zero cannot have a negative exponent");
        return (1.0 / x) * getPower(1.0 / x, -(y + 1));
    }
    double half = getPower(x, y / 2);
    return y % 2 ? half * half * x : half * half;
}
int main()
{
    int a, m;
    double b;
    if (!(cin >> a >> b >> m) || !isfinite(b))
        return 1;
    try
    {
        cout << "integer=" << getPower(a, m) << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
    try
    {
        cout << "real=" << getPower(b, m) << endl;
        cout << "integer base as real="
             << getPower(static_cast<double>(a), m) << endl;
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
        return 1;
    }
}
