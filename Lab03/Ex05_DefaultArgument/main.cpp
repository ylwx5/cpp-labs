#include <iostream>
using namespace std;
void sum(int num = 10)
{
    int s = 0;
    for (int i = 1; i <= num; ++i)
        s += i;
    cout << "sum is:" << s << endl;
}
int main()
{
    sum(100);
    sum();
}
