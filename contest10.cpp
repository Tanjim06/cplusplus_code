#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate maximum earnings
long long calculateMaxEarnings(int n, const vector<pair<int, int>>& bottles) {
    unordered_map<int, int> brandCosts;

    // Step 1: Record the maximum cost for each brand
    for (const auto& bottle : bottles) {
        int brand = bottle.first;
        int cost = bottle.second;
        // Update the maximum cost for this brand
        if (brandCosts.find(brand) == brandCosts.end()) {
            brandCosts[brand] = cost;
        } else {
            brandCosts[brand] = max(brandCosts[brand], cost);
        }
    }

    // Step 2: Collect all maximum costs into a vector
    vector<int> costs;
    for (const auto& entry : brandCosts) {
        costs.push_back(entry.second);
    }

    // Step 3: Sort costs in descending order
    sort(costs.rbegin(), costs.rend());

    // Step 4: Calculate maximum earnings using the top `n` costs
    long long maxEarnings = 0;
    for (int i = 0; i < min(n, static_cast<int>(costs.size())); i++) {
        maxEarnings += costs[i];
    }

    return maxEarnings;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k; // Number of shelves and bottles

        vector<pair<int, int>> bottles(k);
        for (int i = 0; i < k; i++) {
            int brand, cost;
            cin >> brand >> cost;
            bottles[i] = make_pair(brand, cost);
        }

        // Calculate maximum earnings for the current test case
        long long maxEarnings = calculateMaxEarnings(n, bottles);
        cout << maxEarnings << endl; // Output the result for the current test case
    }

    return 0;
}
