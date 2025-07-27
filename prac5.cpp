//to find binomial coefficient 
#include <iostream>
using namespace std;
 int ncr(int n,int r){
    int nfac=1;
    int rfac=1;
    int xfac=1;
    if(n<r){
        cout<<"not possible";
        return 0;
    }else{
    for(int i=1;i<=n;i++){
        nfac*=i;
    }
    for(int j=1;j<=r;j++){
        rfac*=j;
    }
    int x=n-r;
    for(int k=1;k<=x;k++){
        xfac*=k;
    }
    int bino=(nfac)/(rfac*xfac);

    return bino;
   }
}

int main(){
    int n;
    int r;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter the value of r";
    cin>>r;
    int result=ncr(n,r);
    if(result!=0){
        cout<<"the coefficient is "<<result;
    }
    return 0;
}