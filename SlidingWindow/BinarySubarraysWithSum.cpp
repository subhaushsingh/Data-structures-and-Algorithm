#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum_BruteForce(vector<int>& nums, int goal) {
        int ans=0;
      for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){           
          sum+=nums[j];
          if(sum==goal){
            ans++;
          }  
        }
      }
      return ans;  
    }


    int numSubarraysWithSum_withHash(vector<int>& nums, int goal) {
      int count = 0;
      map<int,int> mpp;
      mpp[0]=1;
      int preSum=0;
      for(int i=0;i<nums.size();i++){
        preSum += nums[i];
        int remaining = preSum-goal;
        count += mpp[remaining];
        mpp[preSum] += 1;
      }
      return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
      if (goal < 0) return 0;
      int count = 0;
      int l=0,r=0;
      int sum = 0;
      while(r<nums.size()){
        sum += nums[r];
        while(sum > goal){
          sum -= nums[l];
          l=l+1;
        }
        count += (r-l+1);
        r++;
      }
      return count;
    }
};

int main(){
    vector<int> nums = {1,0,1,0,1};
    vector<int> nums2 = {0,0,0,0,0};
    Solution r;
    cout << r.numSubarraysWithSum_BruteForce(nums,2) << endl;
    cout << r.numSubarraysWithSum(nums,2)-r.numSubarraysWithSum(nums,1);

    return 0;
}