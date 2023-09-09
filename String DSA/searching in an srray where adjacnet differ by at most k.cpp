#include<iostream>
using namespace std;
int adjacentsearch(int arr[],int n,int k,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[]={20,40,50,70,70,60};
    int n=6;
    int k=20;
    int x=60;
   int result= adjacentsearch(arr,6,20,60);
   cout<<"The index of the element is the following "<<result;
    return 0;
}
