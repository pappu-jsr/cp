#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p;
    cin >> p;
    vector<int> s(p);
    map<int, int> m;
    
    for (int i = 0; i < p; i++) {
        cin >> s[i];
        
    }
    
    int q;
    cin >> q;
    vector<int> s1(q);
    
    for (int i = 0; i < q; i++) {
        cin >> s1[i];
    }
    
    for (int i = 0; i < p; i++) {
        m[s[i]]++;
    }
    
    for (int i = 0; i < q; i++) {
        m[s1[i]]++;
    }
    
    if (m.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}