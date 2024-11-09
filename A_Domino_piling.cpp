#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=n*m;
    int count =0;

    for(int i=1;i<ans;i++){
        if(2*i<=ans){
            count ++;
        }
    }
    cout<<count;
    return 0;

}
