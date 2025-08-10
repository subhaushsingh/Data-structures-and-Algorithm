#include <bits/stdc++.h>
using namespace std;


void gcd(int n1, int n2){
    
    while(n1>0 && n2>0){
        (n1>n2) ? n1=n1%n2 : n2=n2%n1;
        (n1==0) ? cout << n2 : cout << n1;
    }   
}


int main(){
    int a,b; cin >> a >> b;
    gcd(a,b);
}