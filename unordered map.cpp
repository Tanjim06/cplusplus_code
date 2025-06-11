#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<int,string> record;
record.insert(make_pair(4268,"istiyak"));
record.insert(make_pair(4275,"ashik"));
record.insert(make_pair(4262,"farhan"));
record.insert(make_pair(4273,"tanvir"));
record.insert(make_pair(4295,"ankon"));
for(auto v:record){
    cout<<v.first<<" "<<v.second<<endl;
}

return 0;
}
