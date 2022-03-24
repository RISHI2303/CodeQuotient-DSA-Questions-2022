#include <bits/stdc++.h>
using namespace std;

int *mergeArrays(int a[], int b[], int asize, int bsize) {
    // Write your code here
    int i = 0, j = 0, k = 0;
    int *ans = new int[asize + bsize];

    while (i < asize && j < bsize) {
        if (a[i] < b[j])
            ans[k++] = a[i++];
        else if (b[j] < a[i])
            ans[k++] = b[j++];
        else {
            ans[k++] = a[i++];
            ans[k++] = b[j++];
        }
    }

    while (i < asize)
        ans[k++] = a[i++];

    while (j < bsize)
        ans[k++] = b[j++];

    return ans;
}

int main()
{
    int i, k, size = 0, size1 = 0, *final;
    cin >> size;
    int a[size];
    for (i = 0; i < size; i++)
        cin >> a[i];

    cin >> size1;
    int b[size1];
    for (i = 0; i < size1; i++)
        cin >> b[i];

    final = mergeArrays(a, b, size, size1);

    for (i = 0; i < (size + size1); i++)
        cout << final[i] << " ";

    return 0;
}