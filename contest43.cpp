#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        int pairs = 0, singles = 0;
        for (auto &[key, count] : freq) {
            pairs += count / 2;
            singles += count % 2;
        }
        cout << pairs + singles / 2 << endl;
    }
    return 0;
}
