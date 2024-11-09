#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    map<int,int> m;
    for(int i=0;i<4;i++){
       cin >> arr[i];
    }
    for(int i=0;i<4;i++){
        m[arr[i]]++;
    }
    if(m.size()==4) cout<<"0";
    else if(m.size()==3) cout<<"1";
    else if(m.size()==2) cout<<"2";
    else{
        cout<<"3";
    }
    return 0;
}