//checking if a number is power of 2 without loops(bitwise operation)
#include <iostream>
using namespace std;
int powtwo(int n){
    bool pow=false;
    if(n>0&&(n&(n-1))>0){  //number is greater then zero as well as the bitwise and of number and one less then the number is also greater theen zero 
            return pow;     //(example= 4(n) and 3(n-1) 4->100 & 3->11) is not greater then zero hence it got the else block
        
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
