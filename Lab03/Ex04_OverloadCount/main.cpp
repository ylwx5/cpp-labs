#include <iostream>
using namespace std;
int Add(int x, int y)
{
    return x + y;
}
int Add(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    int a = 3, b = 4, c = 5;
    cout << Add(a, b) << endl << Add(a, b, c) << endl;
}
