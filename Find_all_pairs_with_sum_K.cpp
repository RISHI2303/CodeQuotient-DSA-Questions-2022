#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end())
            count += m[k - arr[i]];
            
        m[arr[i]]++;
    }
    return count;
}

int main() {
    int T, n, k;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << getPairsCount(arr, n, k) << endl;
    }
    return 0;
}