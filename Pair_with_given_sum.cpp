#include <bits/stdc++.h>
using namespace std;

bool pairSum(vector<int> arr, int n, int k) {
    // Write your code here
    int i = 0, j = n - 1;

    while(i <= j) {
        int sum = arr[i] + arr[j];
        if(sum < k)
            i++;
        else if(sum > k)
            j--;
        else
            return true;
    }

    return false;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    if (pairSum(arr, n, k))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}