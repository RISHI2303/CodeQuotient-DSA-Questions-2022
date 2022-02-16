#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int maxDifference(int arr[], int n) {
    //complete this function
    int minEle = arr[0], maxDiff = arr[1] - arr[0];

    for(int i=1; i<n; i++) {
        maxDiff = max(maxDiff, arr[i]-minEle);
        minEle = min(minEle, arr[i]);
    }

    if(maxDiff)
        return maxDiff;

    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int res = maxDifference(arr, n);
    cout << res;
    return 0;
}