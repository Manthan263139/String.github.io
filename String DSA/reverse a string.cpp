#include<bits/stdc++.h>
using namespace std;
void reversestring(string s){

        int start=0;
        int e=s.length()-1;
        while(start<=e){
        if(s[start]!=s[e]){
            swap(s[start],s[e]);
            start++;
            e--;
        }

        }

}
int main(){
    // reverse a string
    string s =" joshi ";
    reversestring(s);
    cout<<s;
   return 0;


}
