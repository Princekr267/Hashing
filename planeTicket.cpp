#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<vector>
using namespace std;
void itinerary(unordered_map<string, string> tickets){
    unordered_set<string> to;
    for(pair<string, string> ticket : tickets){
        to.insert(ticket.second);
    }
    string start="";
    for(pair<string, string> ticket : tickets){
        if(to.find(ticket.first)==to.end()){
            start=ticket.first;
        }
    }
    cout<<start<<" -> ";
    while(tickets.count(start)){
        cout<<tickets[start]<<" -> ";
        start=tickets[start];
    }
}
int largestSubWith0Sum(vector<int> arr){
    unordered_map<int, int> m;
    int sum=0;
    int ans=0;
    for(int j=0; j<arr.size(); j++){
        sum+=arr[j];
        if(m.count(sum)){
            int currLen=j-m[sum];
            ans=max(ans, currLen);
        } else{
            m[sum]=j;
        }
    }
    return ans;
}
int subarrCountWithK(vector<int> arr, int k){
    unordered_map<int, int> m;
    m[0]=1;
    int sum=0;
    int ans=0;
    for(int j=0; j<arr.size(); j++){
        sum+=arr[j];
        if(m.count(sum-k)){
            ans+=m[sum-k];
        }
        if(m.count(sum)){
            m[sum]++;
        } else{
            m[sum]=1;
        }
    }
    return ans;
}
int main(){
    unordered_map<string, string> tickets;
    tickets["chennai"]="banglore";
    tickets["mumbai"]="delhi";
    tickets["goa"]="chennai";
    tickets["delhi"]="goa";
    itinerary(tickets);
    cout<<endl;
    vector<int> arr={15, -2, 2, -8, 1, 7, 10};
    cout<<"Largest subarray with 0 sum: "<<largestSubWith0Sum(arr)<<endl;
    vector<int> vec={1, 2, 3};
    int k=3;
    cout<<"Subarry count: "<<subarrCountWithK(vec, k)<<endl;
    return 0;
}