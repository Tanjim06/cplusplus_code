#include <iostream>
#include <vector>
using namespace std;

bool canMakeEqual(vector<int>& a, int n) {
    // If n is 3 and the middle element is not the median, it's not possible
    if (n == 3) {
        return (a[0] == a[2]);
    }

    // Loop through the array and check the conditions
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] + a[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the number of elements in the array
        vector<int> a(n);  // Create a vector to store the array

        // Read the elements of the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (canMakeEqual(a, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
