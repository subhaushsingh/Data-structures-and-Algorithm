#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={150,43,23,65,78};
    int n=arr.size();
    int l=arr[0];
    int sl=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]>sl && arr[i]!=l){
            sl=arr[i];
        }
    }
    cout << sl;
}