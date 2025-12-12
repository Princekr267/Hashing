#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void majorityEle(vector<int> nums){
    unordered_map<int, int> um;
    for(int i=0; i<nums.size(); i++){
        if(um.count(nums[i])){
            um[nums[i]]++;
        } else{
            um[nums[i]]=1;
        }
    }
    for(pair<int, int> p : um){
        if(p.second>nums.size()/3){
            cout<<p.first<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int arr[7]={1, 2, 7, 11, 15, 5, 9};
    int n=7;
    int target=13;
    unordered_map<int, int> um;
    for(int i=0; i<n; i++){
        int comp=target-arr[i];
        if(um.count(comp)){
            cout<<"Ans: "<<um[comp]<<", "<<i<<endl;
        }
        um[arr[i]]=i;
    }
    vector<int> nums={1, 3, 2, 5, 1, 3, 1, 5, 1};
    majorityEle(nums);
    return 0;
}