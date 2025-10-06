#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int MaxSubarray(vector<int> &nums){
        int n=nums.size();
        long long sum=0;
        long long max_ele = INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            max_ele=max(sum,max_ele);

            if(sum<0) sum=0;
        }

        return max_ele;
    }
}; 


int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    int ans=obj.MaxSubarray(arr);
    cout << ans;



}