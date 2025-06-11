#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoinsToAdd(int n, int k, vector<int>& a) {
    // Sort the array in descending order to simulate Monocarp's greedy approach
    sort(a.rbegin(), a.rend());

    int current_sum = 0;
    int coins_added = 0;

    // Go through the chests and greedily add coins
    for (int i = 0; i < n; i++) {
        if (current_sum >= k) {
            break;
        }

        int max_chest = a[i];
        current_sum += max_chest;
        coins_added += max_chest;

        // If current_sum exceeds k, check how much extra was added and subtract it
        if (current_sum >= k) {
            int excess = current_sum - k;
            coins_added -= excess; // Remove the extra coins that made it exceed
            break;
        }
    }

    return coins_added; // The total number of coins added
}

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Call the function to compute the minimum coins to add
        cout << minCoinsToAdd(n, k, a) << endl;
    }

    return 0;
}
