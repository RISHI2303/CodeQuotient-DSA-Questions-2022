#include <bits/stdc++.h>
using namespace std;

int rotationCount(int arr[], int size) {
    // Write your code here
    int low = 0, high = size-1;

    while(low <= high) {
        if(arr[low] <= arr[high])
            return low;

        int mid = (low + high)/2;
        int prev = (mid - 1 + size) % size;
        int next = (mid + 1 + size) % size;

        if(arr[mid] < arr[next] && arr[mid] < arr[prev])
            return mid;

        else if(arr[mid] < arr[high])
            high = mid - 1;

        else
            low = mid + 1;
    }

    return 0;
}

int main() {
    int T, i, size = 0;
    cin >> T;

    while (T--) {
        cin >> size;

        int arr[size];
        for (i = 0; i < size; i++)
            cin >> arr[i];

        cout << rotationCount(arr, size) << endl;
    }
    return 0;
}