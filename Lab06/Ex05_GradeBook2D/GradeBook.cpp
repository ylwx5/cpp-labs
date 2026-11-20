#include "GradeBook.h"
#include <iostream>
#include <iomanip>
GradeBook::GradeBook(const std::string& name, const int input[][tests])
    : courseName(name) {
    for (int i = 0; i < students; ++i) {
        for (int j = 0; j < tests; ++j) grades[i][j] = input[i][j];
    }
}
void GradeBook::processGrades() const {
    int low = 100, high = 0, sum = 0, count = 0;
    int frequency[11] = {};
    for (const auto& row : grades) for (int grade : row) {
        if (grade < low) low = grade;
        if (grade > high) high = grade;
        sum += grade;
        ++count;
        ++frequency[grade / 10];
    }
    std::cout << courseName << '\n' << std::fixed << std::setprecision(2);
    for (int i = 0; i < students; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        double sum = 0;
        for (int grade : grades[i]) { std::cout << grade << ' '; sum += grade; }
        std::cout << "average=" << sum / tests;
        std::cout << '\n';
    }
    std::cout << "Minimum=" << low << " Maximum=" << high
              << " Average=" << static_cast<double>(sum) / count << '\n';
    for (int band = 0; band <= 10; ++band) {
        if (band == 10) std::cout << "100: ";
        else std::cout << band * 10 << '-' << band * 10 + 9 << ": ";
        std::cout << std::string(frequency[band], '*') << '\n';
    }
}
