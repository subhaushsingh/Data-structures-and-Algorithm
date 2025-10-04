#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MajorityElement1(vector<int> nums)
    {
        int target = nums.size() / 2;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] == nums[i])
                {
                    cnt++;
                }
            }
            if (cnt > target)
                return nums[i];
        }
        return -1;
    }

    int MajorityElement2(vector<int> nums)
    {
        int n=nums.size();

        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }
    return -1;
    }


 int MajorityElement3(vector<int> nums){
    int cnt=0;
    int el;
    
    for(int i=0;i<nums.size();i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if(nums[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==el) cnt1++;
    }
    if(cnt1>(nums.size()/2)){
        return el;
    }
    return -1;
 }
};

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    Solution obj;
    int ans = obj.MajorityElement3(arr);
    cout << ans;
}