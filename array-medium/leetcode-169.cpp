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
};

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    Solution obj;
    int ans = obj.MajorityElement2(arr);
    cout << ans;
}