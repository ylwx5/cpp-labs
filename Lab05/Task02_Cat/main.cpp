#include "Cat.h"
#include <iostream>

int main()
{
    std::cout << "Before construction: " << Cat::getNumOfCats() << '\n';
    {
        Cat first;
        std::cout << "After first cat: " << Cat::getNumOfCats() << '\n';
        {
            Cat second(first);
            std::cout << "After copy construction: " << Cat::getNumOfCats() << '\n';
            first = second;
            std::cout << "After assignment: " << Cat::getNumOfCats() << '\n';
        }
        std::cout << "After inner scope: " << Cat::getNumOfCats() << '\n';
    }
    std::cout << "After outer scope: " << Cat::getNumOfCats() << '\n';
}
