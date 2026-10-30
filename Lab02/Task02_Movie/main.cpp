#include <iostream>
using namespace std;
int main() {
    int score; cout << "请输入电影评分（0~10整数）：";
    if (!(cin >> score) || score < 0 || score > 10) { cout << "评分无效\n"; return 1; }
    cout << "你认为电影";
    if (score >= 9) cout << "经典";
    else if (score >= 7) cout << "非常好";
    else if (score >= 5) cout << "一般";
    else cout << "烂片";
    cout << '\n';
}
