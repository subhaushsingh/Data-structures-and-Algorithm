#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
     void setZeroes(vector<vector<int>>& matrix,int n,int m) {
        int col[m]={0};
        int row[n]={0};


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    col[j]=1;
                    row[i]=1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]||col[j]){
                    matrix[i][j]=0;
                }
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << matrix[i][j]<< " ";
                }
                cout << endl;
            }
        }

    };


int main(){
    vector<vector<int>> mat={{1,1,1},{1,0,1},{1,1,1}};
    Solution obj;
    obj.setZeroes(mat,3,3);



}