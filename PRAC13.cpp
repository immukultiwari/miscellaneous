#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    int n;
    cout<<"enter the number of elements you want to enter";
    cin>>n;
    while(vec.size()<n){
        int value;
        cout<<"enter the element";
        cin>>value;
        vec.push_back(value);
    }
    cout<<"your elements are";
    for(int i:vec){
         cout<<i<<" ";
    }
}   

