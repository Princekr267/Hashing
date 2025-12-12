#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    unordered_map<string, int> m;
    m["India"]=150;
    m["China"]=150;
    m["US"]=50;
    m["Nepal"]=10;
    m["UK"]=20;
    // cout<<m["India"]<<endl;
    m.erase("Nepal");
    m["India"]=200;
    for(pair<string, int> country : m){
        cout<<country.first<<", "<<country.second<<endl;
    }

    if(m.count("Nepal")){
        cout<<"Nepal exists"<<endl;
    } else{
        cout<<"Nepal doesn't exists"<<endl;
    }
    cout<<"Unordered set:- "<<endl;
    unordered_set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    cout<<s.size()<<endl;
    if(s.find(2)!=s.end()){
        cout<<"Exists"<<endl;
    } else{
        cout<<"Doesn't Exists"<<endl;
    }
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}