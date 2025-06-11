#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        int c = 0;
        int last = -1000000000;
        for(int i=0; i<n; i++){
            if(arr[i] > last + 1){
                c++;
                last = arr[i];
            }
        }
        cout << c <<endl;
    }
    return 0;
}
