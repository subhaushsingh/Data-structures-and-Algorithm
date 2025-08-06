#include <iostream>
using namespace std;

int main(){
    int num; cin >> num;
    int temp_num = num;
    int rev_num=0;

    while(num>0){
        int rem = num%10;
        rev_num = (rev_num*10)+rem;
        num=num/10;
    }


    (rev_num==temp_num) ? cout << "True" : cout << "False";

}