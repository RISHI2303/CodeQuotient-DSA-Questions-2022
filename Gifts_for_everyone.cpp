#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'pickMGifts' function below.
 * @params
 *   m -> number of childrens
 *   arr -> vector of integers denoting N boxes, each box containing different number of chocolates
 *
 * @return
 *   The minimum imbalance possible with N boxes and M children.
 */
int pickMGifts(int m, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int i = 0;
    int ans = INT_MAX;
    while (i + m < size) {
        ans = min(ans, arr[i + m - 1] - arr[i]);
        i++;
    }
    return ans;
}

int main() {
    int m;
    cin >> m;
    int arr_count;
    cin >> arr_count;
    vector<int> arr(arr_count);
    for (int i = 0; i < arr_count; i++) {
        cin >> arr[i];
    }
    int result = pickMGifts(m, arr);
    cout << result << "\n";
    return 0;
}