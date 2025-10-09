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

        void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int colo = 1;


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0) matrix[0][j]=0;
                    else colo=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0){
                    if(matrix[0][j]==0||matrix[i][0]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }

        if(matrix[0][0]==0) {
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }

        if(colo==0) {
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
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
    obj.setZeroes(mat);



}