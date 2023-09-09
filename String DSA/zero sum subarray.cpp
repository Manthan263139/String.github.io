#include<iostream>
using namespace std;
int zerosumSubarray(int arr[],int n){
    int c=0;
 for(int i=0;i<n;i++){
        int sum=0;
    for(int j=i;j<n;j++){
       sum=sum+arr[j];
 if(sum==0){
    return 1;
 }

    }

 }
 return 0;


}
int main(){
    int arr[]={0,0,5,5,0,0};
    int n=6;
   int result = zerosumSubarray(arr,6);
   cout<<result;
    return 0;
}

