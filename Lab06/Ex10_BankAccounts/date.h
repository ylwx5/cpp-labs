#pragma once
class Date {
public:
    Date(int year, int month, int day);
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
    bool isLeapYear() const;
    int getMaxDay() const;
    int distance(const Date& other) const { return totalDays - other.totalDays; }
    void show() const;
private:
    int year, month, day, totalDays;
};
