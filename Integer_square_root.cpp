#include <bits/stdc++.h>
#define ULL unsigned long long
using namespace std;

ULL sqrt(long n) {
    // Write your code here
    if(n == 0 || n == 1)
        return n;
    ULL low = 0, high = n, ans;
    while (low <= high) {
        ULL mid = (low + high)/2;
        ULL sqr = mid * mid;
        if (sqr <= n) {
            low = mid + 1;
            ans = mid;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int main() {
    int T;
    long n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << sqrt(n) << endl;
    }

    return 0;
}