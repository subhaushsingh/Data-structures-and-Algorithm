#include <bits/stdc++.h>
using namespace std;


void revArr(int *arr,int l,int h){
    if(l>=h) return;
    swap(arr[l],arr[h]);
    revArr(arr,l+1,h-1);


}

void revArr2(int *arr,int l,int n){
    if(l>=(n/2)) return;
    swap(arr[l],arr[n-l-1]);

    revArr2(arr,l+1,n);
}

int main(){
    int array1[] = {1,2,3,4,5};
    
    
    int n=5,l=0,h=n-1;
    revArr2(array1,l,n);
    for(int i=0;i<n;i++){
        cout << array1[i]<< endl;
    }
}
