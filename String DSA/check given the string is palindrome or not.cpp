#include<iostream>
using namespace std;
checkpalindrome(string str){
 int s=0;
 int e=str.length()-1;
 while(s<=e){
    if(str[s]!=str[e]){
       s++;
       e--;
       cout<<"This is not the palindromic string";
       }


 }
 cout<<"This is the palindromic string";
}
int main(){
    string str="aba";
    checkpalindrome(str);
    return 0;

}
