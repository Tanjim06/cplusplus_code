#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; i++) cin >> d[i];
        vector<int> l(n), r(n);
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];
        vector<int> low(n + 1, 0), high(n + 1, 0);
        bool possible = true;
        for (int i = 1; i <= n; i++) {
            if (d[i - 1] == -1) {
                low[i] = low[i - 1];
                high[i] = high[i - 1] + 1;
            } else {
                low[i] = low[i - 1] + d[i - 1];
                high[i] = high[i - 1] + d[i - 1];
            }
            low[i] = max(low[i], l[i - 1]);
            high[i] = min(high[i], r[i - 1]);
            if (low[i] > high[i]) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << -1 << "\n";
            continue;
        }
        vector<int> h(n + 1);
        h[n] = high[n];
        for (int i = n - 1; i >= 0; i--) {
            int cand1 = h[i + 1];
            int cand2 = h[i + 1] - 1;
            bool assigned = false;
            if (cand1 >= low[i] && cand1 <= high[i]) {
                int diff = h[i + 1] - cand1;
                if (d[i] == -1 || d[i] == diff) {
                    h[i] = cand1;
                    if (d[i] == -1) d[i] = diff;
                    assigned = true;
                }
            }
            if (!assigned && cand2 >= low[i] && cand2 <= high[i]) {
                int diff = h[i + 1] - cand2;
                if (d[i] == -1 || d[i] == diff) {
                    h[i] = cand2;
                    if (d[i] == -1) d[i] = diff;
                    assigned = true;
                }
            }
            if (!assigned) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                cout << d[i] << (i == n - 1 ? '\n' : ' ');
            }
        }
}
    return 0;
}
