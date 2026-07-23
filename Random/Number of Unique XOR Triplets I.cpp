#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int ans=1;
        while(ans<=n){
            ans <<= 1;
        }
        return ans;



        }


};


int main(){
    Solution sol;
    vector<int> nums={3,1,2};
    cout << sol.uniqueXorTriplets(nums);
}