#include <bits/stdc++.h>
using namespace std;

int leastFavorite(int favorites[], int n) {
    // Write your code here
    unordered_map<int,int> m;
    int minimumFreq = INT_MAX, ans = INT_MIN;

    for (int i = 0; i < n; i++){
        m[favorites[i]]++;
    }

    for(auto i: m)
        minimumFreq = min(i.second, minimumFreq);

    for(auto i: m) {
        if(i.second == minimumFreq)
            ans = max(i.first, ans);
    }

    return ans;
}

int main() {
    int t, n, i, k;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        cout << leastFavorite(a, n) << endl;
    }
    return 0;
}