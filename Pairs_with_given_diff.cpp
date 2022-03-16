#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k){
    // Write your code here
    unordered_map<int, int> m;
    int ans = 0;

    for(int i=0; i<n; i++)
        m[arr[i]]++;

    for(int i=0; i<n; i++) {
        if(m.find(arr[i] + k) != m.end() && m[arr[i] + k] >= 1) {
            ans++;
            m[arr[i] + k]--;
        }
    }

    return ans;

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