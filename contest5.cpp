#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int total_sum = max(max(x1, x2), max(x3, x4));

    // Initialize pairwise sums
    int a_plus_b, a_plus_c, b_plus_c;


    if (total_sum == x1) {
        a_plus_b = x2;
        a_plus_c = x3;
        b_plus_c = x4;
    } else if (total_sum == x2) {
        a_plus_b = x1;
        a_plus_c = x3;
        b_plus_c = x4;
    } else if (total_sum == x3) {
        a_plus_b = x1;
        a_plus_c = x2;
        b_plus_c = x4;
    } else {  // total_sum == x4
        a_plus_b = x1;
        a_plus_c = x2;
        b_plus_c = x3;
    }

    // Calculate the individual integers a, b, and c
    int c = total_sum - a_plus_b; // c = (a + b + c) - (a + b)
    int a = total_sum - b_plus_c; // a = (a + b + c) - (b + c)
    int b = total_sum - a_plus_c; // b = (a + b + c) - (a + c)

    // Output the results
    cout << a << " " << b << " " << c << endl;

    return 0;
}
