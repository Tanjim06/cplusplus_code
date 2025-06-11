#include <iostream>
using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    // Calculate how many moves are needed to reach x and y
    long long mx = (x + k - 1) / k;  // Equivalent to ceil(x / k)
    long long my = (y + k - 1) / k;  // Equivalent to ceil(y / k)

    // Calculate the total number of moves needed
    long long total_moves = max(mx, my); // Max number of moves in either direction
    
    // If mx != my, we need an extra move after alternating
    cout << total_moves * 2 - (mx == my ? 0 : 1) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
