#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int atmost(vector<int>& nums, int k){
        int l=0,r=0,sum=0,count=0;
        while(r<nums.size()){
            if(nums[r]%2!=0) nums[r]=1;
            else nums[r]=0;
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }

int main(){
    vector<int> nums = {1,1,2,1,1};
    vector<int> nums2 = {0,0,0,0,0};
    Solution r;
    cout<<r.numberOfSubarrays(nums,3);
}


};