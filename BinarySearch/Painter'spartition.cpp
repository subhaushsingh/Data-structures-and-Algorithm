#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            int painters = countpainters(nums,mid);
            if(painters>k) low=mid+1;
            else high=mid-1;
        }
        return low;        
    }

private:
    int countpainters(vector<int>& nums, int m){
        int painters=1;
        long long capacity=0;
        for(int i:nums){
            if(capacity+i<=m) capacity+=i;
            else{
                painters++;
                capacity=i;
            }
        }
        return painters;
    }
};



int main(){
    Solution r;

    vector<int> nums = {7,2,5,10,8};
    int k;cin>>k;
    int ans=r.splitArray(nums,k);
    cout<<ans;



}