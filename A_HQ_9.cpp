#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' ){
            x=1;
            cout<<"YES";
            break;
        }
        
    }
    if(x==0)cout<<"NO";

    return 0;
}