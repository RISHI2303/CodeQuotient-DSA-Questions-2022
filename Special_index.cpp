#include <bits/stdc++.h>
using namespace std;

int specialIndex(vector<int> arr) {
    // Write your code here
    int rightSum = 0, leftSum = 0;

    for(int i=0; i<arr.size(); i++)
        rightSum += arr[i];

    for(int i=0; i<arr.size(); i++) {
        rightSum -= arr[i];

        if(rightSum == leftSum)
            return i;

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int n;
    // cin >> n;
    vector<int> arr = {-5, 3, 7, 4, -2, 5, 2};
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    cout << specialIndex(arr);
    return 0;
}