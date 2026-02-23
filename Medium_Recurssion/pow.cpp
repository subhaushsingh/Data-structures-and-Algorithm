#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
const long long MOD = 1000000007;
    double myPow(double x, int n)
    {
        long long exp = n;
        if (exp < 0)
        {
            x = 1 / x;
            exp = -exp;
        }

        double result = 1;

        while (exp > 0)
        {
            if (exp % 2 == 1)
            {
                result *= x;
            }
            x *= x;
            exp /= 2;
        }

        return result;
    }


    long long power_recusrsive(long long x, long long n) {
    if (n == 0)
        return 1;

    long long half = power_recusrsive(x, n / 2);
    long long result = (half * half) % MOD;

    if (n % 2 == 1)
        result = (result * x) % MOD;

    return result;
}
};

int main()
{
    Solution s;
    cout << s.myPow(4, 5) << endl;
    return 0;
}
