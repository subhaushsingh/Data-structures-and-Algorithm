#include <iostream>
using namespace std;

int main(){
    int row,col;
    cin >>row>>col;
    for(int i=0;i<row;i++){
        for(int j=col;j>0;j--){
            cout << "* ";
        }
        col--;
        cout << endl;
    }

}
