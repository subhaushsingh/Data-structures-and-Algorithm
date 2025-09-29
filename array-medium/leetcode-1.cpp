#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> TwoSum(int target,vector<int> nums){
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int left = target-nums[i];
            if(mpp.find(left) != mpp.end()){
                return {mpp[left],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }



};


int main(){



}