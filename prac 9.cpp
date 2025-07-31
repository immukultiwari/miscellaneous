//reversing an integer
#include <iostream>
using namespace std;
int revnum(int n){
    int pow=1;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
}
    return rev;
}
int main(){
    int n;
    cout<<"enter the number that you want to be reversed";
    cin>>n;
    cout<<"reversed number is "<<revnum(n);
return 0;
}
