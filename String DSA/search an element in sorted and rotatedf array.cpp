#include<iostream>
using namespace std;
searcharray(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"The index is "<<i;
        }
    }
}
int main(){
    int arr[]={3,1,2};
    int n=3;
    int k=1;
    searcharray(arr,3,1);
    return 0;
}
