#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string text,int i,int n){
    if(i>=(n/2)) return true;
    if(text[i]!=text[n-i-1]){
        return false;
    }
    return check_palindrome(text,i+1,n);
    
}

int main(){
    string text="ababaa";
    int i=0;
    int n=text.length();
    (check_palindrome(text,i,n)) ? cout << "true" : cout << "false";
}  