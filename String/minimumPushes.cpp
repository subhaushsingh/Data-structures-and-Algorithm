#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
//Not the best solution, utilized 8.34mb the best solution took 8mb
    int minimumPushes(string word) {
        int n=word.size();
        if(n<=8) return n;
        if(n<=16) return 8+(2*(n-8));
        if(n<=24) return 8+(2*8)+(3*(n-16));
        return 8+(2*8)+(3*8)+(4*(n-24));
    }
};

int main(){
    Solution sol;
    
}