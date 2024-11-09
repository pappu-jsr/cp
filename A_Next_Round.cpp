#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    vector<int> arr(n); 
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int temp=arr[k-1];
        if (arr[i] >= temp && arr[i]!=0) {
            cnt++;
        }
        
    }
    
    cout << cnt << endl;
    return 0;
}
