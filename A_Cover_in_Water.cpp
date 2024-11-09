#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
                if(cnt>maxi){
                    maxi=cnt;
                }
            }
            else{
                cnt=0;
            }
        }
        int cnt1=0;
        if(maxi<3){
            for(int i=0;i<n;i++){
                if(s[i]=='.'){
                    cnt1++;
                }
            }
        }
        if(maxi>=3){
            cout<<"2"<<endl;
        }
        else{
            cout<<cnt1<<endl;
        }
    }
    

}