#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void sortColors(vector<int> &nums){
        vector<int> hash(3,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

       for(int i=0;i<hash[0];i++) nums[i]=0;
       for(int i=hash[0];i<hash[0]+hash[1];i++) nums[i]=1;
       for(int i=hash[0]+hash[1];i<n;i++) nums[i]=2;


        for(auto it:nums){
            cout << it <<" ";
        }
       
    }

    void optimizedSortColor(vector<int> &nums){
        int n=nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++,mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        for(auto it:nums){
            cout << it <<" ";
        }
    }
};

int main(){
    Solution obj;
    vector<int> arr={2,0,2,1,1,0};
    obj.optimizedSortColor(arr);



}