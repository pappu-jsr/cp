#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++){
         m[s[i]]++;
    }
    
    if(m.size()%2==0){
        cout<<"CHAT WITH HER!";

    }
    else{
        cout<<"IGNORE HIM!";

    }
   
    
    
    return 0;
}
