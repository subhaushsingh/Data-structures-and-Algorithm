#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int j = 0;
        for (int i = m; i < (m + n); i++)
        {
            nums1[i] = nums2[j++];
        }

        sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m, n;
    vector<int> nums2 = {2, 5, 6};
    cin >> m >> n;

    sol.merge(nums1, m, nums2, n);

    for (auto it : nums1)
    {
        cout << it << " ";
    }
}