#include<iostream>
using namespace std;
int lcs(string a,string b,int i,int j){
    for(int i=0;i<=s.length();i++){
        for(int j=0;j<=s.length();j++){
            if(s[i]==s[j]){
                return 1+lcs(a,b,i+1,j+1);
            }
            else{
                return max[lcs(a,b,i,j+1),lcs(a,b,i+1,j)];
            }
        }
    }
}
int main(){
    string a="abcde";
    string b="ace";
    lcs(a,b,0,0);
    return 0;
}
