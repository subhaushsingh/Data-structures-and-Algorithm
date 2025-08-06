#include <bits/stdc++.h>
#include <math.h>
using namespace std;


// O(n)
// int main(){
// int num; cin >> num;
// for(int i=1;i<=num-1;i++){
//     if(num%i==0){
//         cout << i << endl;
//     }
// }
// cout << num;
// }


int main(){
    int num; cin >> num;
    vector<int> result;

    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            result.push_back(i);
            if(num/i!=i){
                result.push_back(num/i);
            }
        }
    }
    sort(result.begin(),result.end());
    for(auto it : result) cout << it << " ";

}