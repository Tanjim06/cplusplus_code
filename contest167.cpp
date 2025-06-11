#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (k < n) {
            cout << "NO\n";
        } else if (k == n) {
            cout << "YES\n";
        } else {
            // Check whether the array is strictly decreasing fast enough that merges are not possible
            bool possible = false;
            for (int i = 0; i < n - 1; ++i) {
                if (a[i] < 2 * a[i + 1]) {
                    possible = true;
                    break;
                }
            }
            cout << (possible ? "YES\n" : "NO\n");
        }
    }

    return 0;
}
