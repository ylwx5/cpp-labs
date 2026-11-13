#pragma once

class Student {
public:
    Student();
    void Print() const;
private:
    static int count;
    int StudentNo;
};
