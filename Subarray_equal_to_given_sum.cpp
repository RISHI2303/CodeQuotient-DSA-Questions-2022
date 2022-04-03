#include <bits/stdc++.h>
using namespace std;
#define MAX_LEN 100000

void findTheSubArray(int a[], int n, int sum) {
    unordered_map<long, int> m;
    long currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum = currSum + a[i];
        if (currSum == sum) {
            cout << 0 << " " << i;
            return;
        }
        if (m.find(currSum - sum) != m.end()) {
            cout << m[currSum - sum] + 1 << " " << i;
            return;
        }
        m.insert({currSum, i});
    }
    cout << -1;
}

int main() {
    int a[MAX_LEN];
    int i, n, sum;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> sum;
    findTheSubArray(a, n, sum);
    return 0;
}