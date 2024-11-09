#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];

        for(int i=0;i<n;i++){
           
            cin>>arr[i];

        }
        int maxi=arr[0];
        int e=arr[n-1];

        for(int i=1;i<n;i++){
            int sub=abs(arr[i]-arr[i-1]);
            if(sub>maxi){
                maxi=sub;
            }
        }

        int ans=(m-e)*2;

        if(ans>maxi){
            maxi=ans;
        } 
       
            cout<<maxi<<endl;
      

    }
}