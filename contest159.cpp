#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int f(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int min_operations = n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int min_val = arr[i], max_val = arr[j];
            if ((min_val + max_val) % 2 == 0) {
                int count = 0;
                for (int k = 0; k < n; ++k) {
                    if (arr[k] >= min_val && arr[k] <= max_val)
                        count++;
                }
                min_operations = min(min_operations, n - count);
            }
        }
    }
    return min_operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)cin >> arr[i];
        int mn = *min_element(arr.begin(), arr.end());
        int mx = *max_element(arr.begin(), arr.end());
        if ((mn + mx) % 2 == 0) {
            cout << 0 << endl;
        } else {
            cout << f(arr) << endl;
        }
    }
    return 0;
}
