#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canShip(vector<int>& weights, int days, int cap) {
        int currentLoad = 0;
        int requiredDays = 1;

        for (int w : weights) {
            if (currentLoad + w > cap) {
                requiredDays++;
                currentLoad = w;
            } else {
                currentLoad += w;
            }
        }
        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
                high = mid;    
            } else {
                low = mid + 1;   
            }
        }
        return low;
    }
};
//auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });

//This line can be added to make the runtime at leetcode 0

int main(){




};