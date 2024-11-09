#include <iostream>
#include <vector>
using namespace std;


bool isComposite(int num) {
    if (num <= 1) return false;
    if (num <= 3) return false; 
    if (num % 2 == 0 || num % 3 == 0) return true;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int x = 4; x <= n / 2; ++x) {
        int y = n - x;
        if (isComposite(x) && isComposite(y)) {
            cout << x << " " << y << endl;
            break;
        }
    }

    return 0;
}