#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

    
bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==1) return false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
}

int main(){
    vector<int> nums;
    int n,data;
    cout<<"enter size of data";
    cin>>n;
    cout<<"Enter data ";
    for(int i=0;i<n;i++){
        cin>>data;
        nums.push_back(data);
    }
    if(containsDuplicate(nums)==1) cout<<"True";
    else cout<<"False";
    return 0;

}