#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int characterReplacement(string s, int k){
        int hash[26]={0};
        int l=0,maxf=0;

        for(int r=0;r<s.size();r++){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);

            if((r-l+1)-maxf > k){
               hash[s[r]-'A']--; 
               l++;
            }
        }
        return s.size()-l;
    }
};