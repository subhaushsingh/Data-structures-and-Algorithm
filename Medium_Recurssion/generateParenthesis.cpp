#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        backTrack(ans, 0, 0, n, "");
        return ans;
    }

    void backTrack(vector<string> &ans, int open, int close, int n, string s)
    {
        if (open == n && close == n)
        {
            ans.push_back(s);
            return;
        }

        // if (s.length() == 2 * n) {
        //     ans.push_back(s);        ANOTHER BASE CONDITION
        //     return;
        // }

        if (open < n)
        {

            backTrack(ans, open + 1, close, n, s + '(');
        }
        if (close < open)
        {
            backTrack(ans, open, close + 1, n, s + ')');
        }
    }
};