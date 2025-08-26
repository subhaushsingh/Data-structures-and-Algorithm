#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={150,43,223,65,8};
    int n=arr.size();
    int smallest = arr[0];
    int sec_smallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            sec_smallest=smallest;
            smallest=arr[i];
        }
    }
    cout << sec_smallest;
}