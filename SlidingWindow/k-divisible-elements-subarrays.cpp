#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countDistinct(vector<int>& nums, int k, int p) {
         set<vector<int>> st;

        for (int i = 0; i < nums.size(); i++) {
            int divisibleCount = 0;
            vector<int> temp;

            for (int j = i; j < nums.size(); j++) {
                temp.push_back(nums[j]);

                if (nums[j] % p == 0)
                    divisibleCount++;

                if (divisibleCount > k)
                    break;

                st.insert(temp);
            }
        }

        return st.size();
    }
};


int main(){
    vector<int> nums = {2,3,3,2,2};
    int k,p;
    cin >> k;
    cin >> p;
    Solution r;
    cout<<r.countDistinct(nums,k,p);
}