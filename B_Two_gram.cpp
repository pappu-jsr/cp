 #include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s;
    cin >> s;
    // int n = s.size();
    unordered_map<string, int> m;
 
    for (int i = 0; i < n - 1; i++) {
        string t = s.substr(i, 2);
        m[t]++;
    }
 
    int maxi = 0;
    string result = "";
 
    for (auto &[i, j] : m) {
        if (j > maxi) {
            maxi = j;
            result = i;
        }
    }
 
    cout << result << endl;
 
    return 0;
}