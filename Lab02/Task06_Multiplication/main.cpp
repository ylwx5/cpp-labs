#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    for (int row=1; row<=9; ++row) {
        for (int col=1; col<=row; ++col)
            cout << col << '*' << row << '=' << setw(2) << col*row << "  ";
        cout << '\n';
    }
}
