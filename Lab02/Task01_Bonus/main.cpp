#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double profit;
    cout << "Enter monthly profit (yuan): ";
    if (!(cin >> profit) || profit < 0) { cout << "Invalid profit\n"; return 1; }
    double bonus = 0, remaining = profit;
    const double widths[] = {100000,100000,200000,200000,400000};
    const double rates[] = {0.10,0.075,0.05,0.03,0.015};
    for (int i=0; i<5 && remaining>0; ++i) {
        double part = remaining < widths[i] ? remaining : widths[i];
        bonus += part * rates[i]; remaining -= part;
    }
    bonus += remaining * 0.01;
    cout << fixed << setprecision(2) << "Bonus: " << bonus << " yuan\n";
}
