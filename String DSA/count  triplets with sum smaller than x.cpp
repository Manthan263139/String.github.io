#include<iostream>
using namespace std;
int tripletsum(int arr[],int n,int x){
    int c=0;
    for(int i=0;i<n-1;i++){
    for(int j= i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]<x){
                c++;
            }
        }
    }

    }
    cout<<c;
}
int main(){
    int arr[]={5,1,3,4,7};
    int n=5;
    int x=12;
    tripletsum(arr,5,12);
    return 0;
}
