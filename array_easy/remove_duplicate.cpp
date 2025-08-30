#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int removeDuplicates(vector<int>& nums){
            int n = nums.size();
            if(n == 0) return 0;
            int len=1;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[j]>nums[i]){
                        nums[len]=nums[j];
                        len++;
                        i=j-1;
                        break;
                    }
                }
            }
            return len;
        }
};


int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};  
    Solution obj;
    int newLen = obj.removeDuplicates(nums);
    cout << newLen;

}