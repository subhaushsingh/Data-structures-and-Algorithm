#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n;)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];

            int j = i + 1;

            while (j < n && end >= intervals[j][0])
            {
                end = max(end,intervals[j][1]);
                j++;
            }

            ans.push_back({start, end});
            i = j;
        }
        return ans;
    }



    vector<vector<int>> mergeOptimal(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        

        for(auto it:intervals){

            if(ans.empty()||ans.back()[1]<it[0]){
                ans.push_back(it);
            }
            else{
                ans.back()[1]=max(ans.back()[1],it[1]);
            }
        }
        

            
        return ans;
        }
    
};

int main()
{
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = sol.mergeOptimal(intervals);

    for (auto interval : result)
    {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
}