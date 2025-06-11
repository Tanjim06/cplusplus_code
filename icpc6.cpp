#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int score = 0;
        for (auto &e:freq) {
            score += e.second/2;
        }
        cout<<score<<endl;
    }
    return 0;
}
