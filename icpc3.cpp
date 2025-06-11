
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Binary search bounds
    int left = 0, right = 0;

    // Determine the maximum absolute difference between consecutive mountains
    for (int i = 0; i < n - 1; i++) {
        right = max(right, abs(heights[i] - heights[i + 1]));
    }

    // Binary search for the smallest k
    while (left < right) {
        int mid = (left + right) / 2;

        int ranges = 1;  // We start with the first range
        for (int i = 1; i < n; i++) {
            // If the height difference is greater than mid, a new range starts
            if (abs(heights[i] - heights[i - 1]) > mid) {
                ranges++;
            }
        }

        if (ranges <= m) {
            right = mid;  // Try smaller k
        } else {
            left = mid + 1;  // Increase k
        }
    }

    // After binary search, check if it's possible to form exactly m ranges with `left` as k
    int ranges = 1;
    for (int i = 1; i < n; i++) {
        if (abs(heights[i] - heights[i - 1]) > left) {
            ranges++;
        }
    }

    if (ranges == m) {
        cout << left << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
