#include <bits/stdc++.h>
using namespace std;

long solveQueries(int N, int arr[], int Q, int queries[]) {
    // Write your code here
    long ans = 0;
    sort(arr, arr + N);
    reverse(arr, arr + N);

    for (int i = 0; i < Q; i++) {
        ans += arr[queries[i]-1];
    }

    return ans;
}

int main() {
    int i, k, size = 0, size1 = 0;
    cin >> size;
    int a[size];
    for (i = 0; i < size; i++)
        cin >> a[i];

    cin >> size1;
    int b[size1];
    for (i = 0; i < size1; i++)
        cin >> b[i];

    long final = solveQueries(size, a, size1, b);
    cout << final;

    return 0;
}