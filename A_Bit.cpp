#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    string s1="++X";
    string s2="X++";
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s==s1 || s==s2){
            ++x;
        }else{
            --x;
        }
    }
    cout<<x<<endl;
    return 0;
}