#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int first_one = s.find('1');
        int last_one = s.rfind('1');
        if (first_one == string::npos) {
            cout << 0 << endl;
        } else {
            int count_zeros = 0;
            for (int i = first_one; i <= last_one; ++i) {
                if (s[i] == '0') {
                    ++count_zeros;
                }
            }
            cout << count_zeros << endl;
        }
    }
    return 0;
}
