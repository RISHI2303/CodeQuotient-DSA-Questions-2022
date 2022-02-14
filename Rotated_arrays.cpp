#include <bits/stdc++.h>
using namespace std;

void solveQueries(int N, int R, int arr[], int Q, int queries[]) {
    // Write your code here
    if (R >= N)
        R %= N;
    
    reverse(arr, arr + R);
    reverse(arr + R, arr + N);
    reverse(arr, arr + N);
    for (int i = 0; i < Q; i++)
        cout << arr[queries[i]] << " ";
}

int main()
{
    int i, r, k, size = 0, size1 = 0;
    cin >> size >> r;
    int a[size];
    for (i = 0; i < size; i++)
        cin >> a[i];

    cin >> size1;
    int b[size1];
    for (i = 0; i < size1; i++)
        cin >> b[i];

    solveQueries(size, r, a, size1, b);

    return 0;
}