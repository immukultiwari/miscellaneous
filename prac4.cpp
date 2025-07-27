#include <iostream>
using namespace std;
 int digisum(int n){
    int sum=1;
    while (n>0){
        int ldigi=n%10;
        n/=10;
        sum+=ldigi;
    }
    return sum;
 }
 int main(){
    int m;
    cout<<"enter the digit that you want to sum for";
    cin>>m;
    int sum=digisum(m);
    cout<<"sum of digits of "<<m<<"are "<<sum;
    return 0;
 }