//binary to decimal
#include <iostream>
using namespace std;

int bintodeci(int num){
    int ans=0;
    int pow=1;
    while(num>0){
        int rem=num%10;
        int quo=num/10;
        ans+=(pow*rem);
        pow*=2;
        num=num/10;
     }
    return ans;
}
int main(){
    int m;
    cout<<"enter the number you want to convert";
    cin>>m;
    cout<<"requird decimak number is"<<bintodeci(m);
return 0;
}