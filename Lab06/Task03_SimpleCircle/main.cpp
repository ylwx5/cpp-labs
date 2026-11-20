#include "SimpleCircle.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
int main() {
    SimpleCircle first(3);
    SimpleCircle second(first);
    second.setRadius(5);
    SimpleCircle third;
    third = second;
    third = third;
    std::cout << first.getRadius() << ' ' << second.getRadius()
              << ' ' << third.getRadius() << '\n';
    std::cout << std::fixed << std::setprecision(2)
              << first.area() << ' ' << first.circumference() << '\n';
    third.setRadius(0);
    std::cout << "zero area: " << third.area() << '\n';
    try { third.setRadius(-1); }
    catch (const std::invalid_argument&) { std::cout << "negative radius rejected\n"; }
}
