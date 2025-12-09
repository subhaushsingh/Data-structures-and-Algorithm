#include <bits/stdc++.h>
using namespace std;

class Floor_ceiling
{
private:
    int Floor(vector<int> arr,int x){
        int n=arr.size();
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];     
                low = mid + 1;      
            } else {
                high = mid - 1;    
            }
        }
        return ans;
    }

    int Ceiling(vector<int> arr, int x){
        int n=arr.size();
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = arr[mid];  
                high = mid - 1;    
            } else {
                low = mid + 1;      
            }
        }
        return ans;
    }
public:
    Floor_ceiling();
    pair<int,int> floor_ceiling(vector<int> arr, int x){
        int f = Floor(arr, x);
        int c = Ceiling(arr, x);
        return make_pair(f, c);
    }
    ~Floor_ceiling();
};

Floor_ceiling::Floor_ceiling()
{
    cout<<"Constructor called...";
}

Floor_ceiling::~Floor_ceiling()
{
    cout << "Destructor Called...";
}



int main(){
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 5;

    Floor_ceiling finder;
    pair<int, int> ans = finder.floor_ceiling(arr,x);

    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;
    return 0;
}



