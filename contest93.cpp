#include <iostream>
#include <cmath>
#include <iomanip>  // For precision formatting

using namespace std;

int main() {
    int x1, y1, x2, y2;
    
    // Read input values
    cin >> x1 >> y1 >> x2 >> y2;

    // Calculate the distance using the distance formula
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Print the result with high precision
    cout << fixed << setprecision(15) << d << endl;

    return 0;
}
