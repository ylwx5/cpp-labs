#include "GradeBook.h"
#include <memory>
int main() {
    std::unique_ptr<int[]> values(new int[GradeBook::students]{
        87,68,94,100,83,78,85,91,76,87
    });
    GradeBook book("CS101 Introduction to C++ Programming", values.get());
    values.reset();
    book.processGrades();
}
