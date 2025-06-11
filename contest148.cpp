#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long right_jumps = (k + 1) / 2;
        long long left_jumps = k / 2;
        cout << a * right_jumps - b * left_jumps << endl;
    }
    return 0;
}
