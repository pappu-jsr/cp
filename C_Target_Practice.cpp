#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n = 10, m = 10;
        int sum = 0;
        char arr[n][m];
        
        // Input the 10x10 grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        
        // Calculate the sum based on the conditions
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 'X') {
                    if (i == 0 || j == 0 || i == 9 || j == 9) {
                        sum += 1;
                    } else if (i == 1 || j == 1 || i == 8 || j == 8) {
                        sum += 2;
                    } else if (i == 2 || j == 2 || i == 7 || j == 7) {
                        sum += 3;
                    } else if (i == 3 || j == 3 || i == 6 || j == 6) {
                        sum += 4;
                    } else if (i == 4 || j == 4 || i == 5 || j == 5) {
                        sum += 5;
                    }
                }
            }
        }
        
        cout << sum << endl;
    }
}
