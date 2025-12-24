#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool search(vector<int> &nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        int ans=INT_MAX;

        
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[high]){
                ans=min(ans,nums[low]);
                break;
            }

            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                high=mid-1;
                ans=min(ans,nums[mid]);
            }
    }
    return ans;
}

};


int main(){

    vector<int> nums = {3,1,2,3,3,3,3};
    Solution r;
    bool ans=r.search(nums,3);
    cout << ans;

    return 0;
}