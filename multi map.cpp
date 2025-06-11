#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int main(){
//[] is not allowed in multimap for insertion
multimap<string,int> record;
record.insert(make_pair("shihab",54654));
record.insert(make_pair("farhan",32165));
record.insert(make_pair("shihab",79848));
record.insert(make_pair("siyam",36514));
record.insert(make_pair("nehad",45562));
for(auto v:record){
    cout<<v.first<<" "<<v.second<<endl;
}
return 0;
}
