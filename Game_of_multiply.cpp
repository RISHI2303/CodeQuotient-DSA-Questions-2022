#include <bits/stdc++.h>
using namespace std;

int multiplyGame(int N) {
    // Write your code here
    return sqrt(N);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << multiplyGame(n) << "\n";
    }

    return 0;
}