#include <bits/stdc++.h>
using namespace std;

// In this approach, 
// 1. we are using unordered_map as extra space.
// 2. sumTillNow is adding every element in the array. If this element is not present in the map, then we insert this sumTillNow into the map along with that index.
// 3. if that sumTillNow is found in the map, that means that somewhere between the array, 0 has been encountered else sumTillNow can't be the same.

int maxConsecutiveDays(int profit[], int N) {
    // Write your code here
    unordered_map<int, int> m;
    int sumTillNow = 0, maxSum = 0;

    for (int i = 0; i < N; i++) {
        sumTillNow += profit[i];

        if(sumTillNow == 0)
            maxSum = i + 1;

        else {
            if(m.find(sumTillNow) == m.end())
                m.insert({sumTillNow, i});
    
            else
                maxSum = max(maxSum, i - m[sumTillNow]);
        }
    }

    return maxSum;
}

int main() {
    int n, k;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxConsecutiveDays(arr, n);
    return 0;
}