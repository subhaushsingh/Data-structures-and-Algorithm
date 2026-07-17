#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> suffSum(vector<int> &nums){
        int n = nums.size();

        vector<int> suffixSum(n,0);
        suffixSum[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]+nums[i];
        }

        return suffixSum;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,5,2,-5,1,4};
    vector<int> suffixSum =s.suffSum(nums);

    for(auto x: suffixSum){
        cout << x << " ";
    }



    return 0;
}