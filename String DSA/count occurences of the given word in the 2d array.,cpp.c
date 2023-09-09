#include<iostream>
using namespace std;
int solve(int i,int j,string s,char ch[6][6],int size,int index){
    int found=0;
    if(i>=0 && j>=0 && i<6&& j<6&&s[index]==ch[i][j]){
        char temp=s[index];
        char[i][j]=0;
        index+=1;
        if(index==size){
            found =1;
        }
        else{
            found+=solve(i+1,j,s,ch,size);
            found+=solve(i-1,j,s,ch,size);
            found+=solve(i,j+1,s,ch,size);
            found+=solve(i,j-1,s,ch,size);
        }
        char[i][j]=temp;
    }
}
int main(){
 string s="GEEKS";
 char ch[6][6]={
     {'D','D','D','G','D','D'},
     {'B','B','D','E','B','S'},
     {'B','S','K','E','B','K'},
     {'D','D','D','D','D','E'},
     {'D','D','D','D','D','E'},
     {'D','D','D','D','D','G'}
 };
 int ans=0;
 int size=5;
 for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        ans+=solve(i,j,s,ch,size,0);
    }
    cout<<ans;
    return 0;
 }

