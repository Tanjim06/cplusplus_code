#include<iostream>
#include<algorithm>
using namespace std;
int countFibonacciness(int a1, int a2, int a3, int a4, int a5) {
    int c = 0;
    if (a3 == a1 + a2) c++;
    if (a4 == a2 + a3) c++;
    if (a5 == a3 + a4) c++;
    return c;
}
int main(){
int t;
cin>>t;
while(t--){
     int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int ans = 0;
        int c1 = a1 + a2;
        int c2 = a4 - a2;
        int c3 = a5 - a4;
        ans = max(ans, countFibonacciness(a1, a2, c1, a4, a5));
        ans = max(ans, countFibonacciness(a1, a2, c2, a4, a5));
        ans = max(ans, countFibonacciness(a1, a2, c3, a4, a5));

        cout << ans << endl;
    }

return 0;
}
