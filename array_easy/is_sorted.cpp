#include <bits/stdc++.h>
using namespace std;

// bool check_sorted(vector<int> &arr,int n){
//     int i=0;
//     bool is_sorted = false;
//     while(i<n-1){
//         if(arr[i]<=arr[i+1] ){
//             is_sorted=true;
//             i++;
//         }else{
//         is_sorted=false;
//         break;
//         }
//     }
//     return is_sorted;
// }

bool check_sorted(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;   
        }
    }
    return true;  
}

int main(){
    vector<int> arr={122,23,344,455,566};
    int n=arr.size();
    (check_sorted(arr,n)) ? cout << "True" : cout << "False";
}