#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        unordered_set<int> s(nums.begin(), nums.end());
        int index = 0;
        for (auto it : s)
        {
            nums[index++] = it;
        }

        sort(nums.begin(), nums.begin()+index);
        return index;
    }

    int removeDuplicates(string choice, vector<int> &nums)
    {
        if (choice == "set_method")
        {
            set<int> s(nums.begin(), nums.end());
            int index = 0;
            for (auto it : s)
            {
                nums[index++] = it;
            }

            return index;
        }
        return 0;
    }
};

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution obj;
    int newLen = obj.removeDuplicates("set_method", nums);
    cout << newLen;
}