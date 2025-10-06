#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<long long> MaxSubarray(vector<int> &nums){
        int n=nums.size();
        long long sum=0;
        long long max_ele = LLONG_MIN;

        int start=0;
        int low=-1,high=-1;

        for(int i=0;i<n;i++){

            if(sum==0) start=i;

            sum+=nums[i];
            if (sum > max_ele) {
            max_ele = sum;

            low = start;
            high = i;
        }

            if(sum<0) sum=0;
        }

        return {low,high,max_ele};
    }
}; 


int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    vector<long long> ans=obj.MaxSubarray(arr);
    long long sum = ans[2];
    cout << "SUM:" << sum<< endl;
    for(int i=ans[0];i<=ans[1];i++){
        cout << arr[i] << " ";
    }

    



}