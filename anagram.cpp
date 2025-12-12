#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<string>
using namespace std;
bool isValidAnagram(string s, string t){
    if(s.size()!=t.size()) return false;
    unordered_map<char, int> freq;
    for(int i=0; i<s.size(); i++){
        if(freq.count(s[i]))
            freq[s[i]]++;
        else 
            freq[s[i]]=1;
    }
    for(int i=0; i<t.size(); i++){
        if(freq.count(t[i])){
            freq[t[i]]--;
            if(freq[t[i]]==0){
                freq.erase(t[i]);
            }
        } else{
            return false;
        }
    }
    return freq.size()==0;

}
int countDistinct(vector<int> arr){
    unordered_set<int> s;
    for(int i=0; i<arr.size(); i++){
        s.insert(arr[i]);
    }
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    return s.size();
}
int main(){
    string s="cae";
    string t="rae";
    cout<<isValidAnagram(s, t)<<endl;
    vector<int> vec={4, 3, 2, 5, 6, 7, 3, 4, 2, 1};
    cout<<countDistinct(vec)<<endl;
    return 0;
}