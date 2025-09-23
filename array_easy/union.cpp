#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> sol1(int arr1[],int arr2[],int n1,int n2){
            set <int> s;
            for(int i=0;i<n1;i++){
                s.insert(arr1[i]);
            }
            for(int i=0;i<n2;i++){
                s.insert(arr2[i]);
            }
            vector<int> Union;
            for(auto it: s){
                Union.push_back(it);
            }

            return Union;
        }
};

int main(){
    Solution s1;
    int arr1[]={1,2,3,4};
    int arr2[]={2,3,4,5,6};
    vector < int > Union=s1.sol1(arr1,arr2,4,5);

    for(auto it:Union){
        cout << it << " ";
    }

}