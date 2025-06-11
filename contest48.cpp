#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    unordered_map<int, int> ratingIndices;

    // Read ratings and store the first occurrence index of each distinct rating
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (ratingIndices.find(arr[i]) == ratingIndices.end()) {
            ratingIndices[arr[i]] = i + 1; // Store 1-based index
        }
    }

    // Check if we have enough distinct ratings
    if ((int)ratingIndices.size() < k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        int count = 0;
        for (auto &entry : ratingIndices) {
            if (count == k) break;
            cout << entry.second << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}
