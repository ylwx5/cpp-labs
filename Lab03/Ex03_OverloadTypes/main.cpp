#include <iostream>
using namespace std;
namespace exercise
{
int abs(int x)
{
    return x > 0 ? x : -x;
}
double abs(double x)
{
    return x > 0 ? x : -x;
}
long abs(long x)
{
    return x > 0 ? x : -x;
}
} // namespace exercise
int main()
{
    int x1 = 4;
    double x2 = 5.5;
    long x3 = 6L;
    cout << exercise::abs(x1) << endl
         << exercise::abs(x2) << endl
         << exercise::abs(x3) << endl;
}
