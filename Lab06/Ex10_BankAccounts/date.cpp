#include "date.h"
#include <iostream>
#include <stdexcept>
namespace {
    constexpr int daysBefore[] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
}
Date::Date(int y, int m, int d) : year(y), month(m), day(d), totalDays(0) {
    if (year < 1 || year > 9999 || month < 1 || month > 12
        || day < 1 || day > getMaxDay()) throw std::invalid_argument("invalid date");
    int years = year - 1;
    totalDays = years * 365 + years / 4 - years / 100 + years / 400
        + daysBefore[month - 1] + day;
    if (isLeapYear() && month > 2) ++totalDays;
}
bool Date::isLeapYear() const {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int Date::getMaxDay() const {
    if (isLeapYear() && month == 2) return 29;
    return daysBefore[month] - daysBefore[month - 1];
}
void Date::show() const { std::cout << year << '-' << month << '-' << day; }
