#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> Leader(vector<int> &nums){
        int n=nums.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=i+1;j<=n;j++){
                if(nums[i]<nums[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1) result.push_back(nums[i]);
        }
        return result;

    }


    vector<int> Leader2(vector<int> &nums){
        int n=nums.size();
        vector<int> result;
        int max = nums[n - 1];
        result.push_back(nums[n-1]);

        for(int i=n-2;i>=0;i--){
            if(nums[i]>max){
                result.push_back(nums[i]);
                max=nums[i];
            }
        }

        return result;

    }




};


int main(){

vector<int> arr={10, 22, 12, 3, 0, 6};
Solution obj;
vector<int> result = obj.Leader2(arr);

for(auto it:result){
    cout << it << " ";
}


}