#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
int main(){
unordered_multimap<string,int> record;
record.insert(make_pair("siyam",45644));
record.insert(make_pair("shihab",36589));
record.insert(make_pair("afif",32659));
record.insert(make_pair("jack",78621));
record.insert(make_pair("shihab",22595));
for(auto v:record){
    cout<<v.first<<" "<<v.second<<endl;
}


return 0;
}
