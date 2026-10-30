#include <iostream>
using namespace std;
inline int max(int x, int y)
{
    return x > y ? x : y;
}
int main()
{
    int a, b;
    if (!(cin >> a >> b))
        return 1;
    cout << "The max is:" << ::max(a, b) << endl;
}
