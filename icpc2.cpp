#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int current_ants = 0;
    int min_initial_ants = 0;

    for (int i = 0; i < n; ++i) {
        current_ants += a[i];
        if (current_ants < 0) {
            min_initial_ants += -current_ants;
            current_ants = 0;  // reset to 0 to ensure the ant count never goes negative
        }
    }

    cout << min_initial_ants << endl;
    return 0;
}
