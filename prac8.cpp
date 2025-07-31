//checking if a number is power of 2 without loops(bitwise operation)
#include <iostream>
using namespace std;
int powtwo(int n){
    bool pow=false;
    if(n>0&&(n&(n-1))>0){
        return pow;
        
    }else{
        pow=true;
        return pow;
    }

return pow;
}
int main(){
    int n;
    cout<<"enter the number to be checked";
    cin>>n;
    bool result=powtwo(n);
    if (result==true){cout<<"it is a power of 2";
    }else{
        cout<<"not a power of two";
    
    }
    return 0 ;
}