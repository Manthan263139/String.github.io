#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int target){
    int ans=0;
    // check for the first occurencess
    int low=0;
    int high=n-1;
    int mid=0;
    while(low<+high){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
        ans=mid;
        high=mid-1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
}

int lastocc(int arr[],int n,int target){
    int ans=0;
    // check for the first occurencess
    int low=0;
    int high=n-1;
    int mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
        ans=mid;
        low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
}




int main(){
    int arr[]={1,3,5,5,5,5,7,123,125};
    int n=9;
    int target=7;
    cout<<"The first occurences is"<<firstocc(arr,9,7)<<endl;
      cout<<"The last occurences is"<<lastocc(arr,9,7)<<endl;

    return 0;
}
