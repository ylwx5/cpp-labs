#include "account.h"
#include <iostream>
#include <cmath>
#include <stdexcept>
double SavingsAccount::total = 0;
SavingsAccount::SavingsAccount(const Date& date, const std::string& id, double rate)
    : id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
    if (!std::isfinite(rate) || rate < 0) throw std::invalid_argument("invalid rate");
    date.show();
    std::cout << '\t' << '#' << id << " created\n";
}
double SavingsAccount::accumulate(const Date& date) const {
    return accumulation + balance * date.distance(lastDate);
}
void SavingsAccount::record(const Date& date, double amount, const std::string& desc) {
    accumulation = accumulate(date);
    lastDate = date;
    amount = std::round(amount * 100) / 100;
    balance += amount;
    total += amount;
    date.show();
    std::cout << '\t' << '#' << id << '\t' << amount << '\t' << balance
              << '\t' << desc << '\n';
}
void SavingsAccount::error(const std::string& message) const {
    std::cout << "Error(#" << id << "): " << message << '\n';
}
void SavingsAccount::deposit(const Date& date, double amount, const std::string& desc) {
    if (!std::isfinite(amount) || amount <= 0 || date.distance(lastDate) < 0) {
        error("invalid deposit");
        return;
    }
    record(date, amount, desc);
}
void SavingsAccount::withdraw(const Date& date, double amount, const std::string& desc) {
    if (!std::isfinite(amount) || amount <= 0 || date.distance(lastDate) < 0) {
        error("invalid withdrawal");
        return;
    }
    amount = std::round(amount * 100) / 100;
    if (amount > balance) error("not enough money");
    else record(date, -amount, desc);
}
void SavingsAccount::settle(const Date& date) {
    if (date.getYear() <= 1 || date.getMonth() != 1 || date.getDay() != 1
        || date.distance(lastDate) <= 0) {
        error("invalid settlement date");
        return;
    }
    double interest = accumulate(date) * rate
        / date.distance(Date(date.getYear() - 1, 1, 1));
    record(date, interest, "interest");
    accumulation = 0;
}
void SavingsAccount::show() const { std::cout << id << "\tBalance: " << balance; }
