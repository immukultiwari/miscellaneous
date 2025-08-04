//to find the index of an element from an array using the element
#include <iostream>
#include <climits>
using namespace std;
void arraymaker(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return ;

}
int keysearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    }

int main(){
    int n;
    cout<<"input number of elements you want to enter";
    cin>>n;
    int arr[n];
    cout<<"enter the elements you wnt to enter";
    arraymaker(arr,n);
    int key;
    cout<<"enter the element you want to search for";
    cin>>key;
    int x=keysearch(arr,n,key);
    if(x==-1){
        cout<<"not available";

    }else{
        cout<<"required index is"<<x;
    }


}


