#include "SimpleCircle.h"
#include <stdexcept>
namespace { constexpr double pi = 3.141592653589793; }
SimpleCircle::SimpleCircle(int radius) : itsRadius(nullptr) {
    if (radius < 0) throw std::invalid_argument("negative radius");
    itsRadius = new int(radius);
}
SimpleCircle::SimpleCircle(const SimpleCircle& other)
    : itsRadius(new int(*other.itsRadius)) {}
SimpleCircle& SimpleCircle::operator=(const SimpleCircle& other) {
    *itsRadius = *other.itsRadius;
    return *this;
}
SimpleCircle::~SimpleCircle() { delete itsRadius; }
int SimpleCircle::getRadius() const { return *itsRadius; }
void SimpleCircle::setRadius(int radius) {
    if (radius < 0) throw std::invalid_argument("negative radius");
    *itsRadius = radius;
}
double SimpleCircle::area() const { return pi * *itsRadius * *itsRadius; }
double SimpleCircle::circumference() const { return 2 * pi * *itsRadius; }
