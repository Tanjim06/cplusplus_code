#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int k;
        cin >> k; // Number of integers in the test case
        unordered_set<int> numbers; // To store the integers in a set

        // Read the integers and store them in a set to check for existence
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            numbers.insert(x);
        }

        // Find the divisors of k
        for (int n = 1; n * n <= k; n++) {
            if (k % n == 0) { // n is a divisor of k
                int m = k / n; // m is the other divisor

                // Check if both n and m are in the input list
                if (numbers.count(n) && numbers.count(m)) {
                    cout << n << " " << m << endl;
                    break; // We can break once we find a valid pair
                }
            }
        }
    }
    return 0;
}
