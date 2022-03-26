#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m] and Second subarray is arr[m+1..r]
void merge(int array[], int l, int m, int r) {
    int const leftLen = m - l + 1;
    int const rightLen = r - m;

    int leftArray[leftLen], rgtArray[rightLen];

    for (int i = 0; i < leftLen; i++)
        leftArray[i] = array[l + i];
    for (int j = 0; j < rightLen; j++)
        rgtArray[j] = array[m + 1 + j];

    int indexOfleftLen = 0, indexOfrightLen = 0;
    int indexOfMergedArray = l;

    while (indexOfleftLen < leftLen && indexOfrightLen < rightLen) {
        if (leftArray[indexOfleftLen] <= rgtArray[indexOfrightLen]) {
            array[indexOfMergedArray] = leftArray[indexOfleftLen];
            indexOfleftLen++;
        }
        else {
            array[indexOfMergedArray] = rgtArray[indexOfrightLen];
            indexOfrightLen++;
        }
        indexOfMergedArray++;
    }
    
    while (indexOfleftLen < leftLen) {
        array[indexOfMergedArray] = leftArray[indexOfleftLen];
        indexOfleftLen++;
        indexOfMergedArray++;
    }

    while (indexOfrightLen < rightLen) {
        array[indexOfMergedArray] = rgtArray[indexOfrightLen];
        indexOfrightLen++;
        indexOfMergedArray++;
    }
}

/* l is for left index and r is right index of the sub-array of arr to be sorted */
void mergeSort(int array[], int l, int r) {
    if(l >= r)
        return;

    int m = l + (r - l) / 2;
    mergeSort(array, l, m);
    mergeSort(array, m + 1, r);
    merge(array, l, m, r);
}

int main() {
    int i, n, arr[50];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}