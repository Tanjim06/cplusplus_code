#include <iostream>
#include <cmath>
using namespace std;
void solve(string s) {
    int val = stoi(s);
    int root = sqrt(val);
    if (root * root != val) {
        cout << -1 << endl;
        return;
    }
    for (int a = 0; a <= root; ++a) {
        int b = root - a;
        if (a <= 99 && b <= 99) {
            cout << a << " " << b << endl;
            return;
        }
    }

    cout << -1 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
