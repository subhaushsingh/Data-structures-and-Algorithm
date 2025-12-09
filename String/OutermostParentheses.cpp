#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int counter=0;

        for (char c:s){
             if(c=='(') {
                if(counter>0) result+=c;
                counter++;
             }
             if( c==')'){
                counter--;
                if(counter>0) result+=c;
             }
        }

        return result;
    }
};


int main() {
    string s = "(()())(())";  
    // Create object of Solution class
    Solution sol;             

    // Get result
    string ans = sol.removeOuterParentheses(s);

    // Print result
    cout << "The result is: " << ans << endl;

    return 0;

}