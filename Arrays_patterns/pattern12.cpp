#include <iostream>
using namespace std;


void printPattern(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;

            cout << (n-min(min(top,bottom),min(right,left)));
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter the row:-";
    int row; cin >> row;

    printPattern(row);


}