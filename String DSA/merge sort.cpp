#include<iostream>
using namespace std;


       void mergee(int arr[],int s,int e){
      int mid=(s+e)/2;

      int len1=mid-s+1;
      int len2=e-mid;

      int *first=new int[len1];
      int*second=new int[len2];

      // copy the value

      int mainArrayIndex=s;
      for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
      }

      mainArrayIndex=mid+1;
      for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
      }

      // merge two sorted array
      int index1=0;
      int index2=0;
      mainArrayIndex=s;

      while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
          arr[mainArrayIndex++]=first[index1++];
           }
           else{
            arr[mainArrayIndex++]=second[index2++];
           }
      }
      while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
      }
      while(index2<len2){
             arr[mainArrayIndex++]=second[index2++];

      }
      delete[]first;
      delete[]second;


       }

       void mergesort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;

       // left wala sort karna hai
       mergesort(arr,s,mid);

       // right wala part sort karna hai
       mergesort(arr,mid+1,e);

       // array ko merge karna hai
       mergee(arr,s,e);
       }


int main(){
    int arr[6]={6,4,1,8,9,3};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<"The sorted array is "<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
