#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> sol1(int arr1[],int arr2[],int n1,int n2){
            
            set <int> s;
            for(int i=0;i<n1;i++){
                s.insert(arr1[i]);
            }
            for(int i=0;i<n2;i++){
                s.insert(arr2[i]);
            }
            vector<int> Union;
            for(auto it: s){
                Union.push_back(it);
            }

            return Union;
        }


        vector<int> sol2(int arr1[],int arr2[],int n1,int n2){
            int i=0,j=0;
            vector<int> Union;
            while(i<n1 || j<n2){
                if(arr1[i]<=arr2[j]){
                    if(Union.size()==0||Union.back()!=arr1[i]){
                    Union.push_back(arr1[i]);
                    }
                    i++;
                }
                else{
                    if(Union.size()==0||Union.back()!=arr2[j]){
                    Union.push_back(arr2[j]);
                    }
                    j++;
                }
            }
            while(i<n1){
                    if(Union.size()==0||Union.back()!=arr1[i]){
                    Union.push_back(arr1[i]);
                    }
                    i++;
                }

                while(j<n2){
                    if(Union.size()==0||Union.back()!=arr2[j]){
                    Union.push_back(arr2[j]);
                    }
                    j++;
                }
                return Union;
        }
};

int main(){
    Solution s1;
    int arr1[]={1,2,3,4};
    int arr2[]={2,3,4,5,6};
    vector < int > Union=s1.sol2(arr1,arr2,4,5);

    for(auto it:Union){
        cout << it << " ";
    }

}