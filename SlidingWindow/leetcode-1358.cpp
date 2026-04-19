#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxSum=0;
        for(int i=0;i<k;i++) lsum+=cardPoints[i];    
        maxSum=lsum;
        int rindex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[rindex--];
            maxSum=max(maxSum,lsum+rsum);
        }   
        return maxSum;
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5,6,1};
    int k;
     cin >> k;
    Solution r;
    cout<<r.maxScore(nums,k);
}