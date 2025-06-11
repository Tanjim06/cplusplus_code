#include<iostream>
#include<unordered_map>
#include<sstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    unordered_map<int,char>mp;
    mp[0]='o';
    mp[1]='i';
    mp[3]='e';
    mp[4]='a';
    mp[5]='s';
    mp[7]='t';
    while(t--){
        string line,word,decoded;
        getline(cin,line);
         stringstream ss(line);
        bool first = true; // To handle spacing properly
        while (ss>>word) {
            string decodedWord = "";
            for (char c : word) {
                decodedWord += mp[c]; // Convert each digit
            }
            if (!first) cout << " ";
            cout << decodedWord;
            first = false;
        }
        cout << endl; // Move to next line for the next test case
    }
    return 0;
}