#include <iostream>
using namespace std;

void printPattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout << "*";
        }

        for(int j=1;j<2*i-1;j++){
            cout << " ";
        }

        for(int j=0;j<=n-i;j++){
            cout << "*";
        }
        
        cout << endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }

        for(int j=1;j<=2*(n-i);j++){
            cout << " ";
        }

        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}


void printPattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-1||i==n-1){
                cout<<"*";
            }
            else{
                cout << " ";
            }
        }
    }
    cout << endl;
}

int main(){
    cout << "Enter the row:-";
    int row; cin >> row;
    printPattern12(row);

}