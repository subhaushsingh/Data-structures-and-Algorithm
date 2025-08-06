#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t>0){
    int num; cin >> num;
    int copy_num = num;
    double temp_num = 0;
    int n = to_string(num).size();


    while(num>0){
        double last_digit = num%10;
        temp_num = temp_num + pow(last_digit,n);
        num=num/10;
    }

    (temp_num==copy_num) ? cout << "True" : cout << "False";
    cout << endl;

    t--;
}
}