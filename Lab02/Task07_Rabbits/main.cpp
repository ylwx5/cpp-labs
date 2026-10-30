#include <iostream>
using namespace std;
// Birth month is month 1. Each pair first reproduces in its third month.
int main() {
    int previous=1, current=1;
    cout << "Month\tPairs\tRabbits\n";
    for (int month=1; month<=20; ++month) {
        if (month>=3) { int next=previous+current; previous=current; current=next; }
        cout << month << '\t' << current << '\t' << 2*current << '\n';
    }
}
