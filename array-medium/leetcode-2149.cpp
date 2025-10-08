#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }

        int i = 0, j = 0, k = 0;

        while (i < n)
        {
            if (i % 2 == 0)
                nums[i++] = pos[j++];
            else
                nums[i++] = neg[k++];
        }

        return nums;
    }
};

int main()
{

    vector<int> arr = {3, 1, -2, -5, 2, -4};

    Solution obj;
    arr=obj.rearrangeArray(arr);
    for(auto it:arr) {
    cout << it << " ";

    }
}