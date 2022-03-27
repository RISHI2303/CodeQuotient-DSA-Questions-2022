#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (arr[l] >= arr[r])
            return l;
        int mid = (l + r) / 2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;
        if (arr[prev] < arr[mid] && arr[next] < arr[mid])
            return mid;
        else if (arr[mid] > arr[r])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int binarySearch(int arr[], int x, int l, int r)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int searchElement(int arr[], int n, int x, int pivot)
{
    if (x < arr[n - 1])
        return binarySearch(arr, x, 0, pivot - 1);
    else
        return binarySearch(arr, x, pivot, n - 1);
}

long totalSearchTime(int N, int book_IDs[], int K, int booksToFind[])
{
    int pivot = findPivot(book_IDs, N);
    long time = 0;
    for (int i = 0; i < K; i++)
    {
        long ans = searchElement(book_IDs, N, booksToFind[i], pivot);
        ans = (ans < 0) ? N : ans;
        time += ans;
    }
    return time;
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

    long final = totalSearchTime(size, a, size1, b);
    cout << final;

    return 0;
}