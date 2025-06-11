#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> melodies;
        for (int i = 0; i < n - 1; ++i) {
            string melody = s.substr(i, 2);
            melodies.insert(melody);
        }
        cout << melodies.size() << endl;
    }

    return 0;
}
