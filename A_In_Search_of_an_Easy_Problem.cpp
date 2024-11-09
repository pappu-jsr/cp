#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            x=1;
            cout<<"HARD";
            break;
        }
    }
    if(x==0) cout<<"EASY";


   


    return 0;
}