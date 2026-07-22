#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> jobSequencing(vector<int>& deadline,vector<int>& profit) {

        int n = deadline.size();

        vector<pair<int, int>> jobs;

        int maxDeadline = 0;

        for (int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
            maxDeadline = max(maxDeadline, deadline[i]);
        }
        sort(jobs.rbegin(), jobs.rend());

        set<int> available;

        for (int i = 1; i <= maxDeadline; i++) {
            available.insert(i);
        }

        int count = 0;
        int totalProfit = 0;

        for (auto job : jobs) {

            int p = job.first;
            int d = job.second;

            auto it = available.upper_bound(d);

            if (it != available.begin()) {

                --it;

                count++;
                totalProfit += p;

                available.erase(it);
            }
        }

        return {count, totalProfit};
    }
};

int main(){
    Solution sol;

}