#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ans1 = 0;
    int ans2 = 0;
    cin >> n;
    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left=0; 
    int right=n-1;
     bool turn = true; 
    while (left <= right) {
        if (arr[left] > arr[right]) {
            if (turn) {
                ans1 += arr[left];
            } else {
                ans2 += arr[left];
            }
            left++;
        } else {
            if (turn) {
                ans1 += arr[right];
            } else {
                ans2 += arr[right];
            }
            right--;
        }
        turn = !turn; 
    }
    
    
    cout << ans1 << " " << ans2 << endl;
    return 0;
}