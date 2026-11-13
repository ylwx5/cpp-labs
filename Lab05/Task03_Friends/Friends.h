#pragma once

class X;

class Y {
public:
    void g(X* value);
};

class Z;

class X {
public:
    int getValue() const;
private:
    int i = 0;
    friend void Y::g(X* value);
    friend class Z;
    friend void h(X* value);
};

class Z {
public:
    void f(X* value);
};

void h(X* value);
