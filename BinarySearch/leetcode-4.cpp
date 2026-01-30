#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0, k = 0;

        int size = n + m;
        int idx = size / 2, idx2 = (size / 2) - 1;
        int idx_ele = -1, idx2_ele = -1;

        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
            {
                if (k == idx)
                    idx_ele = nums1[i];
                if (k == idx2)
                    idx2_ele = nums1[i];
                k++;
                i++;
            }
            else{
                 if (k == idx)
                    idx_ele = nums2[j];
                if (k == idx2)
                    idx2_ele = nums2[j];
                k++;
                j++;
            }
        }
        while(i < n ){
             if (k == idx)
                    idx_ele = nums1[i];
                if (k == idx2)
                    idx2_ele = nums1[i];
                k++;
                i++;
        }
        while(j < m ){
               if (k == idx)
                    idx_ele = nums2[j];
                if (k == idx2)
                    idx2_ele = nums2[j];
                k++;
                j++;
            }
        
        if(size%2==1) return idx_ele;
        return (double)(double(idx_ele+idx2_ele)) / 2.0;
        
    }
};

int main()
{
    vector<int> nums1 = {2,4,6};
    vector<int> nums2 = {1,3,5};

    Solution t;
    double ans = t.findMedianSortedArrays(nums1,nums2);
    cout << ans;

}