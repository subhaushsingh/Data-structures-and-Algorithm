#include <iostream>
using namespace std;

int main(){
    int row,col;
    cin >>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            cout << i+1;
        }
        cout << endl;
    }

}