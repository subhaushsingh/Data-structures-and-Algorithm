#include <bits/stdc++.h>
using namespace std;


void revArr(int *arr,int l,int h){
    if(l>=h) return;

    int temp=arr[l];
    arr[l]=arr[h];
    arr[h] = temp;
    revArr(arr,l+1,h-1);


}

int main(){
    int array1[] = {1,2,3,4,5};
    
    
    int n=5,l=0,h=n-1;
    revArr(array1,l,h);
    for(int i=0;i<n;i++){
        cout << array1[i]<< endl;
    }
}
