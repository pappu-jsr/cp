#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        int n;
        cin >> n;  // Read size of array
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];  // Read array elements
        }

        // Try to sort the array by making adjacent swaps where necessary
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 1; i < n - 1; i++) {
                if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
            }
        }

        // Check if the array is sorted after attempting swaps
        if (is_sorted(arr.begin(), arr.end())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
