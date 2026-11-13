#include "Friends.h"

int X::getValue() const
{
    return i;
}

void Y::g(X* value)
{
    value->i += 1;
}

void Z::f(X* value)
{
    value->i += 5;
}

void h(X* value)
{
    value->i += 10;
}
