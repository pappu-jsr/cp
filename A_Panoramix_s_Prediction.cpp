#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Check if m is prime
    if (!isPrime(m)) {
        cout << "NO";
        return 0;
    }

    // Check if there's any prime between n and m
    for (int i = n + 1; i < m; i++) {
        if (isPrime(i)) {
            cout << "NO";
            return 0;
        }
    }

    // If no primes found between n and m, output "YES"
    cout << "YES";
    return 0;
}
