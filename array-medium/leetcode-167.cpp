#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> TwoSum(int target,vector<int> nums){
        int n=nums.size();
        int low=0,high=n-1;
        while(low<high){
            int sum=nums[low]+nums[high];
            if(sum==target) return {low,high};
            else if (sum<target) low++;
            else high--;
        } 
        return {-1,-1};
    }



};


int main(){
    vector<int> arr={-10,-5,-1,1,2,7};
    Solution obj;
    int target ; cin >> target;
    vector<int> result = obj.TwoSum(target,arr);
    for(auto it:result){
        cout << it << " ";
    }

}