#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,count=0; cin >> num;

    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            count++;
            if(num/i!=i){
                count++;
            }
        }
    }
    (count==2) ? cout << "Prime" : cout<<"Not Prime";


}