#pragma once
#include "date.h"
#include <string>
class SavingsAccount {
public:
    SavingsAccount(const Date& date, const std::string& id, double rate);
    const std::string& getId() const { return id; }
    double getBalance() const { return balance; }
    double getRate() const { return rate; }
    static double getTotal() { return total; }
    void deposit(const Date& date, double amount, const std::string& desc);
    void withdraw(const Date& date, double amount, const std::string& desc);
    void settle(const Date& date);
    void show() const;
private:
    std::string id;
    double balance, rate;
    Date lastDate;
    double accumulation;
    static double total;
    double accumulate(const Date& date) const;
    void record(const Date& date, double amount, const std::string& desc);
    void error(const std::string& message) const;
};
