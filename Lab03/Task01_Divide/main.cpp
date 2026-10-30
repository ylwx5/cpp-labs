#include <iostream>
using namespace std;
#include <limits>
short int divide(unsigned short int a, unsigned short int b)
{
    return b == 0 ? -1 : static_cast<short int>(a / b);
}
int main()
{
    long long a, b;
    if (!(cin >> a >> b) || a < 0 || b < 0 || a > 65535 || b > 65535)
    {
        cerr << "Expected unsigned short values" << endl;
        return 1;
    }
    if (b != 0 && a / b > numeric_limits<short>::max())
    {
        cerr << "Quotient exceeds short range" << endl;
        return 1;
    }
    cout << divide(static_cast<unsigned short>(a),
                   static_cast<unsigned short>(b))
         << endl;
}
