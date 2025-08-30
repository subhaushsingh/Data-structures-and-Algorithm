#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int RemoveDuplicate(vector<int> &nums){
            int n=nums.size();
            int i=0;
            for(int j=1;j<n;j++){
                if(nums[i]!=nums[j]){
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1; 
        }
};

int main(){

     vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution obj;
    int newLen = obj.RemoveDuplicate(nums);
    cout << newLen;


}