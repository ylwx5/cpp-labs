#include <iostream>
void swap(int &v1, int &v2)
{
    if (v1 == v2)
        return;
    int temp = v2;
    v2 = v1;
    v1 = temp;
}
int main()
{
    int a, b;
    if (!(std::cin >> a >> b))
        return 1;
    ::swap(a, a);
    std::cout << a << " " << b << std::endl;
    ::swap(a, b);
    std::cout << a << " " << b << std::endl;
}
