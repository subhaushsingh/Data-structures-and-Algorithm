#include <bits/stdc++.h>
using namespace std;

void printN(int n){
    if(n==0) return;
    cout << n << endl;
    printN(n-1);
}

void print1toN(int start,int n){
    if(start>n) return;
    cout << start << endl;
    print1toN(start+1,n);
}

int sumN(int n){
    if(n==0) return 0;
    return n+sumN(n-1);
}

int factorial(int n){
    if(n==0||n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    cin >> n;
    int fact = factorial(n);
    cout << fact;
}