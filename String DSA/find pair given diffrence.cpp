#include<iostream>
using namespace std;
int main(){
    int arr[]={5,20,3,2,5,80};
    int n=6;
    int x=78;
    int ans=-1;
    for(int i=0;i<n;i++){
        int y=arr[i]+x;
        for(int j=0;j<n;j++){
            if(arr[j]==y){
                ans=1;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
