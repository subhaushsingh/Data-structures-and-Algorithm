#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int result;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])]<0) result = abs(nums[i]);
            nums[abs(nums[i])] *=-1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]*=-1;
        }
        return result;
    }
};


int main(){

}