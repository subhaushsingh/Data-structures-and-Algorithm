#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0;long ans=0;
        while(s[i]==' '){
            i++;
        }
        int sign = 1;
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;

            i++;
        }
        while(i<s.length()){
            if(!isdigit(s[i])) break;
            ans=ans*10+s[i]-'0';
            if(sign==-1 && -1*ans<INT_MIN) return INT_MIN;
            if(sign==1 && ans>INT_MAX) return INT_MAX;
            i++;
        }
        return (int)(sign*ans);
    }
};


int main(){
    Solution sol;
    cout << sol.myAtoi("   -042");



}