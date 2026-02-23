#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    
    int countGoodNumbers(long long n)
    {
        long long val = n;
        long long even = (val + 1) / 2;
        long long odd = val / 2;
        long long even_val = power_recusrsive(5, even);
        long long odd_val = power_recusrsive(4, odd);
        return (even_val * odd_val) % 1000000007;
    }


    const long long MOD = 1000000007;


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
    cout << s.countGoodNumbers(50);

    return 0;
}
