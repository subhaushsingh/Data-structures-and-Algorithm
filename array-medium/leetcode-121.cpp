#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int MaxProfit(vector<int> &nums){
        int n=nums.size();
        int profit =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    int diff = nums[j]-nums[i];
                    profit = max(profit,diff);
                }
            }
        }
        return profit;
    }


};

int main(){
    vector<int> arr={7,1,5,3,6,4};
    Solution obj;
    int ans=obj.MaxProfit(arr);
    cout << ans;



}