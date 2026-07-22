#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canJump(vector<int>& nums) {
        int minReach = 0;
        int count=0;

        for (int i = 0; i < nums.size(); i++) {

            if (i > minReach)
                return count;
            count++;
            minReach = min(minReach, i + nums[i]);

            if (minReach >= nums.size() - 1)
                return count++;
        }

        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> nums={2,3,1,1,4};
    cout << sol.canJump(nums);

    return 0;
}