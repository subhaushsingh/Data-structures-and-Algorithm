#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long ans=1;
        row.push_back(ans);
        for(int i=1;i<=rowIndex;i++){
            ans=ans*(rowIndex-i+1);
            ans=ans/i;
            row.push_back(ans);
        }
        return row;
    }
};

int main(){
Solution obj;
int rowIndex;
cin >> rowIndex;
vector<int> row=obj.getRow(rowIndex);
for(auto it:row) cout << it << " ";


}