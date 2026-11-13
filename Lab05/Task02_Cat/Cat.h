#pragma once

class Cat {
public:
    Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&) = default;
    ~Cat();
    static int getNumOfCats();
private:
    static int numOfCats;
};
