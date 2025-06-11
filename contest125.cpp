#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
        long long max_val = *max_element(a.begin(), a.end());
        max_val = max(max_val, *max_element(b.begin(), b.end()));
        vector<int> longest_subarray_a(max_val + 2, 0);
        vector<int> longest_subarray_b(max_val + 2, 0);
        long long counter = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] == a[i - 1]) {
                counter++;
            } else {
                longest_subarray_a[a[i - 1]] = max(longest_subarray_a[a[i - 1]], (int)counter);
                counter = 1;
            }
        }
        longest_subarray_a[a[n - 1]] = max(longest_subarray_a[a[n - 1]], (int)counter);
        counter = 1;
        for(int i = 1; i < n; i++) {
            if(b[i] == b[i - 1]) {
                counter++;
            } else {
                longest_subarray_b[b[i - 1]] = max(longest_subarray_b[b[i - 1]], (int)counter);
                counter = 1;
            }
        }
        longest_subarray_b[b[n - 1]] = max(longest_subarray_b[b[n - 1]], (int)counter);
        long long maxfreq = 0;
        for(int i = 0; i <= max_val + 1; i++) {
            maxfreq = max(maxfreq, (long long)(longest_subarray_a[i] + longest_subarray_b[i]));
        }

        cout << maxfreq << endl;
    }
    return 0;
}
