#include <bits/stdc++.h>
using namespace std;

int specialIndex(vector<int> arr) {
    // Write your code here
    int n = arr.size();
    int sumL = 0, sumR = 0, i=0, j = n-1;

    while(i != j) {
        sumL += arr[i];
        sumR += arr[j];

        if(sumL == sumR)
            return i+1;

        i++;
        j--;
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << specialIndex(arr);
    return 0;
}