#include <iostream>
using namespace std;

int main(){
    int row; cin>>row;

    for(int i=1;i<=2*row-1;i++){
        int stars = i;
        if (i > row) stars = 2*row-i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;

    }
}   