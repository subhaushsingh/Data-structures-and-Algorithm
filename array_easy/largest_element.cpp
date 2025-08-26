#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={15,43,23,65,78};
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest) largest=arr[i];
    }
    cout << largest;
}