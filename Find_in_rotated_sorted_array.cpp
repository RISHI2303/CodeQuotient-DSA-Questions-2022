#include <bits/stdc++.h>
using namespace std;

int searchRotatedSortedArray(int arr[], int n, int k) {
    // Write your code here
    int low = 0, high = n-1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(arr[mid] == k)
            return mid;

        else if(arr[low] <= arr[mid]) {
            if(arr[low] <= k && arr[mid] > k)
                high = mid - 1;
            else
                low = mid + 1;
        }

        else {
            if(arr[mid] < k && arr[high] >= k)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int T, i, size = 0, target;
    cin >> T;

    while (T--) {
        cin >> target >> size;
        int arr[size];
        for (i = 0; i < size; i++)
            cin >> arr[i];

        cout << searchRotatedSortedArray(arr, size, target) << endl;
    }
    return 0;
}