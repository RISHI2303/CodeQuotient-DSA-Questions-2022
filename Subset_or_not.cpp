#include <bits/stdc++.h>
using namespace std;

int isSubsetorNot(int a[], int n, int b[], int m) {
    // Write your code here
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    for (int i = 0; i < m; i++)
        if(mp.find(b[i]) == mp.end())
            return 0;

    return 1;
}

int main()
{
    int a[50], b[50];
    int i, n, m;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for (i = 0; i < m; i++)
        cin >> b[i];
    cout << isSubsetorNot(a, n, b, m);
    return 0;
}