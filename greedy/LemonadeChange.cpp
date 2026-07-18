#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int no_5 = 0,no_10=0, flag = 1;
        for (int i = 0; i < bills.size(); i++)
        {
            if(bills[i]==5){
                no_5++;continue;
            }
            if(bills[i]==10){
                no_10++;
                if(no_5>0) {
                    no_5--;
                    continue;
                }
                else{
                    flag=0;break;
                }
            }
            else{
                if(no_10>0 && no_5>0){
                    no_10--,no_5--;
                }
                else if((no_5-3)>=0){
                    no_5-=3;
                }
                else {
                    flag=0;
                    break;
                }
            }
        }
        return flag==1;
    }
};

int main()
{
    Solution sol;
    vector<int> bills = {5,5,10,10,20};
    bool result=sol.lemonadeChange(bills);
    cout << result;

    return 0;
}