//to find the smallest element in an array(operations on array)
#include <iostream>
#include <climits>
using namespace std;
void arraymaker(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return ;
}
int mincheck(int arr[],int n){
    int SMALL=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<SMALL){
            SMALL=arr[i];
        }
    }
    return SMALL;
}
int main(){
    int n;
    cout<<"enter the number of elements you want";
    cin>>n;
    int arr[n];
    cout<<"enter the elements you want";
    arraymaker(arr,n);
    cout<<"smallest number is"<<mincheck(arr,n);
    return 0;

}

