#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProduct(int n) {
        int num=n;
        int maxele=num%10;
        int secmax=0;
        num=num/10;
        while(num!=0){
            int secnum=num%10;
            num=num/10;
            if(maxele<secnum){
                secmax=maxele;
                maxele=secnum;
            }
            else secmax=max(secmax,secnum);          
        }
        return maxele*secmax;
    }
};

int main(){
    Solution sol;
    cout << sol.maxProduct(31);




}