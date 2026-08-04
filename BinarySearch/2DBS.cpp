#include <bits/stdc++.h>
using namespace std;

//O(nlogm)

// class Solution {
// public:
//     int search(vector<int>& arr,int x){
//         int n=arr.size();
//         int low = 0, high = n - 1;
//         int ans = -1;
//          while (low <= high) {
//             int mid = (low + high) / 2;
//             if(arr[mid] == x)
//             return true;
//         else if(arr[mid] < x)
//             low = mid + 1;
//         else
//             high = mid - 1;
//         }
//         return ans;
//     }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int ans;
//         for(int i=0;i<n;i++){
//             if(matrix[i][0] <= target && target <= matrix[i][m-1]){
//                 ans=search(matrix[i],target);
//                 if(ans!=-1) break;
//             }
//         }
//         return ans!=-1 ? true : false;
//     }
// };



//O(Logmn)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int n=matrix.size();
        int m=matrix[0].size();

        int low=0,high=(n*m-1);
        while(low<=high){
            int mid=(low+high)/2;
            int i=mid/m;
            int j=mid%m;

            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]<target) low=mid+1;
            else high=mid-1;
        }
        return 0;
    }
};