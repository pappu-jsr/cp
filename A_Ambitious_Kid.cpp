#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    int min=INT_MAX;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] = abs(arr[i]);
        
         int num=arr[i];
            if(num<min){
              min=num;
          }
        
        
    }
    cout<<min;
    
}