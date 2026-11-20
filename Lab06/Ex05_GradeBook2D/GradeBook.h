#pragma once
#include <string>
class GradeBook {
public:
    static const int students = 10;
    static const int tests = 3;
    GradeBook(const std::string& name, const int input[][tests]);
    void processGrades() const;
private:
    std::string courseName;
    int grades[students][tests];
};
