#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> prefSum(vector<int> &nums){
        int n = nums.size();

        vector<int> prefixSum(n);
        prefixSum[0]=nums[0];

        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }

        return prefixSum;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,5,2,-5,1,4};
    vector<int> prefixSum =s.prefSum(nums);

    for(auto x: prefixSum){
        cout << x << " ";
    }



    return 0;
}