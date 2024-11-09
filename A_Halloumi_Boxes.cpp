#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(m==1 && !is_sorted(arr, arr + n)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

   
}

}