#include <cstdlib>
#include <iostream>
unsigned long long fib(int n)
{
    if (n <= 2)
        return 1;
    auto left = fib(n - 1);
    auto right = fib(n - 2);
    return left + right;
}
int main(int argc, char *argv[])
{
    int n;
    if (argc > 1)
        n = std::atoi(argv[1]);
    else
    {
        std::cout << "Input n (1-40): ";
        if (!(std::cin >> n))
            return 1;
    }
    if (n < 1 || n > 40)
        return 1;
    auto result = fib(n);
    std::cout << "F(" << n << ")=" << result << std::endl;
}
