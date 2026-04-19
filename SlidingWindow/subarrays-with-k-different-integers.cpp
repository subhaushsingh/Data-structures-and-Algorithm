#include <bits/stdc++.h>
using namespace std;

static int m[20001];
class Solution{
public:
    int atmost(vector<int>& nums, int k){
        int l=0,r=0,count=0;
        unordered_map<int,int> mpp;
        while(r<nums.size()){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;                
                 if (mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }        
            count+=(r-l+1);
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }


//This is the best solution for CP 
//constraints   1 <= nums.length <= 2 * 104
//1 <= nums[i], k <= nums.length
    int subarraysWithKDistinct_BestSoln(vector<int>& nums, int k) {
        function<int(int)> geqk = [&](int k) {
            int n = nums.size(), l = 0, r = 0, cnt = 0;
            memset(m, 0, (n + 1) * sizeof(int));
            while (r < n) {
                k -= ++m[nums[r++]] == 1;
                while (k < 0)  k += !--m[nums[l++]];
                cnt += r - l;
            }
            return cnt;
        };
        return geqk(k) - geqk(k - 1);
    }
};


int main(){
    vector<int> nums = {1,2,1,2,3};
    int k;
    cin >> k;
    Solution r;
    cout<<r.subarraysWithKDistinct(nums,k);
}