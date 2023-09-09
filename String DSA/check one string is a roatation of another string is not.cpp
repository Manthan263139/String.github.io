#include<bits/stdc++.h>
using namespace std;
int main(){

    // check one string is rotation of another string
    // str1=ABACD
    // str2=CDABA
    // s1+s2=ABACDABACD
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2){
        cout<<"NO";
    }
    else{
        string temp=s1+s2;
        if(temp.find(s2)){
            cout<<"yes";
        }
        else{
            cout<<"NO";
        }
    }



return 0;
}
