//decimal to binary
#include <iostream>
using namespace std;

int dectobino(int num){
    int ans=0;
    int pow=1;
    while(num>0){
        int rem=num%2;
        int quo=num/2;
        ans+=(pow*rem);
        pow*=10;
        num=num/2;
     }
    return ans;
}
int main(){
    int m;
    cout<<"enter the number you want to convert";
    cin>>m;
    cout<<"requird binary is"<<dectobino(m);
return 0;
}