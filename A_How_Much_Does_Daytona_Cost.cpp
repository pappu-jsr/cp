#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int cnt=0;

        for(int i=0;i<n;i++){
           
           if(arr[i]==m){
            cout<<"YES"<<endl;
            cnt=1;
            break;
           }
           

        }
        if(cnt==0){
            cout<<"NO"<<endl;
        }
    }
}