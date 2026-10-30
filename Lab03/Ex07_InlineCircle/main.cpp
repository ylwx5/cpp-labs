#include <iostream>
using namespace std;
inline double Circle(double r)
{
    return 3.1416 * r * r;
}
int main()
{
    for (int i = 1; i <= 3; ++i)
        cout << "r=" << i << " area=" << Circle(i) << endl;
}
