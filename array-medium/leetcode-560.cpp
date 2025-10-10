#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0]=1;
        int preSum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            int remaining = preSum-k;
            cnt+=mpp[remaining];
            mpp[preSum]+=1;
        }
        return cnt;
    }
};


int main(){
    vector<int> arr={1,1,1};
    Solution obj;
    cout << obj.subarraySum(arr,2);



}