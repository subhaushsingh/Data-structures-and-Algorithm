#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_length = 0;
        int l = 0,r = 0, len = 0, noZero = 0;
        while(r<nums.size()){
            if(nums[r]==0){
                noZero++;
            }
            while(noZero>k){
                if(nums[l]==0) noZero--;
                l++;
            }
            len = r-l+1;
            max_length = max(len,max_length);
            r++;
        }
        return max_length;
    }
};


int main(){
    Solution s;
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    cout << s.longestOnes(nums,3);
}