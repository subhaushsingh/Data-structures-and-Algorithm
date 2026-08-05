#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr,int x){
        int n=arr.size();
        int low = 0, high = n - 1;
        int ans = -1;
         while (low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] == x)
            return true;
        else if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
        }
        return ans;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans;
        for(int i=0;i<n;i++){
            if(matrix[i][0] <= target && target <= matrix[i][m-1]){
                ans=search(matrix[i],target);
                if(ans!=-1) break;
            }
        }
        return ans!=-1 ? true : false;
    }
};