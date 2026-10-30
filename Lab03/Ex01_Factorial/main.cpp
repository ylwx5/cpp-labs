#include <iostream>
using namespace std;
int fact(int val)
{
    int rec = 1;
    while (val > 1)
        rec *= val--;
    return rec;
}
int main()
{
    int j = fact(5);
    cout << "5! is " << j << endl;
}
// fact("hello"), fact(), fact(42,10,0) are invalid calls.
// fact(3.14) converts to int 3, so the result is 6.
