#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }
        int pairs = n / 2;
        int bad_pairs = pairs - k;
        bool possible = false;
        if (bad_pairs <= min(count0, count1)) {
            for (int x = 0; x <= k; x++) {
                int y = k - x;
                if ((2 * x + bad_pairs) <= count0 && (2 * y + bad_pairs) <= count1) {
                    possible = true;
                    break;
                }
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
