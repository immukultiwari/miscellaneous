#include <iostream>
using namespace std;
void arrrev(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    return ;

}
void arraymaker(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return ;

}
int printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
  
}
int main(){
    int n;
    cout<<"enter the number of elements you wnt to enter ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    arraymaker(arr,n);
    cout<<"reversed array is ";
    arrrev(arr,n);
    printarr(arr,n);
    return 0;
}
    


    


