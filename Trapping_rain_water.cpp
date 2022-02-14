#include <bits/stdc++.h>
using namespace std;

// O(n) time complexity and O(n) space complexity
// int totalWater(int a[], int n) {
// 	// Write your code here  
//     int ans = 0;
//     vector <int> left;
//     vector <int> right(n);
//     left.push_back(a[0]);
//     right[n-1] = a[n-1];

//     for(int i=1; i<n; i++)
//         left.push_back(max(left[i-1], a[i]));

//     for(int i=n-2; i>=0; i--)
//         right[i] = max(right[i+1], a[i]);

//     for(int i=0; i<n; i++) {
//         ans += (min(left[i], right[i]) - a[i]);
//     }

//     return ans;
// }


// O(n) time and O(1) space
int totalWater(int a[], int n) {
	// Write your code here
    int lMax = a[0];
    int rMax = a[n-1];
    int i = 1, j = n-2, ans = 0;

    while(i <= j) {
        lMax = max(lMax, a[i]);
        rMax = max(rMax, a[j]);

        if(lMax < rMax) {
            ans += (lMax - a[i]);
            i++;
        }

        else {
            ans += (rMax - a[j]);
            j--;
        }
    }

    return ans;
}

int main() {
    int i, n, k;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    k = totalWater(a, n);
    cout << k;
    return 0;
}