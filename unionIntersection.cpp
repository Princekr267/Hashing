#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void unionSet(vector<int> arr, vector<int> vec){
    unordered_set<int> un;
    for(int i=0; i<arr.size(); i++){
        un.insert(arr[i]);
    }
    for(int i=0; i<vec.size(); i++){
        un.insert(vec[i]);
    }
    for(int i : un){
        cout<<i<<" ";
    }
    cout<<endl;
}
void intersecSet(vector<int> arr, vector<int> vec){
    unordered_set<int> in;
    for(int i=0; i<arr.size(); i++){
        in.insert(arr[i]);
    }
    for(int i=0; i<vec.size(); i++){
        if(in.find(vec[i])!=in.end()){
            cout<<vec[i]<<" ";
            in.erase(vec[i]);
        }
        
    }
}
int main(){
    vector<int> vec={7, 3, 9};
    vector<int> arr={6, 3, 9, 2, 9, 4};
    unionSet(arr, vec);
    intersecSet(vec, arr);
    return 0;
}