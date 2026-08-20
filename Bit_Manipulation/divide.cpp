#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a = dividend;
        long long b = divisor;

        bool negative = (a < 0) ^ (b < 0);

        a = llabs(a);
        b = llabs(b);

        long long ans = 0;

        for (int i = 31; i >= 0; i--) {
            if ((b << i) <= a) {
                a -= (b << i);
                ans += (1LL << i);
            }
        }

        if (negative)
            ans = -ans;

        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return ans;
    }
};