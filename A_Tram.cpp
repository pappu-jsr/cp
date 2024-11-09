#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        v.push_back({a,b});
    }

    int ans=v[0].second-v[0].first;

    int maxi=ans;
    for(int i=1;i<n;i++)
    {
        int l=ans-v[i].first;
        ans=l+v[i].second;

        maxi=max(ans,maxi);
    }
    cout<<maxi;
    return 0;
}
