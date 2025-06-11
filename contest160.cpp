#include <iostream>
#include <string>
using namespace std;
bool f(string& s) {
    int balance = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') balance++;
        else balance--;
        if (balance == 0 && i != n - 1) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        string str; cin >> str;
        if(f(str)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
