#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0,j = 0;
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0;
        while(i < n && j < m){
            if(s[j] >= g[i]) {
                i++,j++;
                count++;
            }
            else{
                j++;
            }
        }
        return count; 
    }
};

int main(){
    Solution sol;
    vector<int> g = {1,3,3,4,5};
    vector<int> s = {1,1,2,2,3,4};
    int result = sol.findContentChildren(g,s);
    cout << result;



    return 0;
}