#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int count=0;
for(int i=0;i<n;i++)
{
   vector<int> v(3);
    int temp=0;
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
        if(v[i]==1) temp++;
    }
    if(temp>=2) count++;
}
    cout<<count<<endl;
 
    return 0;
}

