#include <bits/stdc++.h>
using namespace std;

int lastIndexofK(vector <int> arr, int n, int k) {
    // Write Your Code Here
    int low = 0, high = n-1, ans = -1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(arr[mid] > k)
            high = mid - 1;
        
        else if (arr[mid] < k)
            low = mid + 1;

        else {
            ans = mid;
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    cout << lastIndexofK(v, n, k) << endl;
    return 0;
}