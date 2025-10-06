#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>  MajorityElementNew(vector<int> &nums){
        int n=nums.size();

        vector<int> result;
        map<int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            if(it.second > n/3){
                result.push_back(it.first);
            }
        }
        if (result.empty()) return {};
    return result;
    }

};

int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2,3};

    Solution obj;
    vector<int> ans=obj.MajorityElementNew(arr);
    for(auto it:ans) cout << it << " ";
}