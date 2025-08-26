#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={150,43,223,65,8};
    int n=arr.size();
    int l=arr[0];
    int sl=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]<l && arr[i]>sl){
            sl=arr[i];
        }
    }
    cout << sl;


}