#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int sqrt_binary(int n){
        int l = 0, h = n;
        int ans=1;
        while(l<=h){
            int mid=(l+h)/2;

            if(mid*mid<=n){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;


    }



};


int main(){
    int n;
    cin >> n;
    Solution r;
    int ans =r.sqrt_binary(n);
    cout << ans;

    return 0;
}