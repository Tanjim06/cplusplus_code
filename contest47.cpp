#include<iostream>
#include<cstring>
#include<set>
using namespace std;
int main(){
string str;
cin>>str;
set<char> distinctChars; // A set to store distinct characters

    // Add each character to the set
    for (char ch : str) {
        distinctChars.insert(ch);
    }

    // Check the number of distinct characters
    if (distinctChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
