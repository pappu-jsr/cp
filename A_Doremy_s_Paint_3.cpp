#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       map<int,int> m1;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
        m1[arr[i]]++;
       }

       if(m1.size()==1 || m1.size()==2)
       {
        if(m1.size()==2)
        {
            
            for(auto i:m1)
            {
                if(n%2==0){
                   if(i.second==n/2)
                   {
                    cout<<"Yes"<<endl;
                    break;
                   }
                   else{

                    cout<<"No"<<endl;
                    break;

                   }
                }
                else{
                    if(i.second==n/2 || i.second==n/2+1)
                    {
                        cout<<"Yes"<<endl;
                        break;
                    }
                    else{
                        cout<<"No"<<endl;
                        break;
                    }
                }
                
            }
            
        }
        else{
            cout<<"Yes"<<endl;
        }
       }

       else{
        cout<<"No"<<endl;
       }
       
       
    }
}