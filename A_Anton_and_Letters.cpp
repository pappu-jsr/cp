#include <bits/stdc++.h>
using namespace std;
int main(){
 vector<char>  v;
 char c;
 map<char,int> m;
while(cin>>c)
{
v.push_back(c);
}
for(int i=0;i<v.size();i++){
   if(v[i]>='a' && v[i]<='z'){
    m[v[i]]++;
   }
}
cout<<m.size();
return 0;
}