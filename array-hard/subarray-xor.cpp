#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int subarraysWithXorK(vector <int> &nums,int k){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int xorr=0;
            for(int j=i;j<nums.size();j++){
                xorr=xorr^nums[j];

                if(xorr==k)  cnt++;
            }
        }

        return cnt;
    }

int subarraysWithXorK2(vector <int> &a,int k){
    int n = a.size();
    int xr = 0;
    map<int, int> mpp; 
     mpp[0]++; 
    int cnt = 0;


      for (int i = 0; i < n; i++) {
        // prefix XOR till index i:
        xr = xr ^ a[i];

        //By formula: x = xr^k:
        int x = xr ^ k;

        // add the occurrence of xr^k
        // to the count:
        cnt += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[xr]++;
    }
    return cnt;

}

};



int main(){

    vector<int> arr={4, 2, 2, 6, 4};
    int k ;
    cin >> k;
    Solution obj;
    int ans=obj.subarraysWithXorK(arr,k);
    cout << ans;
}