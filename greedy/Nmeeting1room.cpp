#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int maxMeetings(vector<int>& start, vector<int>& end) {

    int n = start.size();

    vector<pair<int, int>> meetings;

    for (int i = 0; i < n; i++) {
        meetings.push_back({end[i], i});
    }

    sort(meetings.begin(), meetings.end());

    int count = 1;

    int lastEnd = meetings[0].first;

    for (int i = 1; i < n; i++) {

        int pos = meetings[i].second;

        if (start[pos] > lastEnd) {
            count++;
            lastEnd = end[pos];
        }
    }

    return count;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end   = {2, 4, 6, 7, 9, 9};

    cout << maxMeetings(start, end);

    return 0;
}