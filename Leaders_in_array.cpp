#include <bits/stdc++.h>
using namespace std;

vector<int> findTheLeaders(vector<int> arr) {
    // Write your code here
    vector <int> v;
    int n = arr.size();
    int maxSoFar = arr[n-1];
    v.push_back(maxSoFar);

    for(int i = n-2; i>=0; i--) {
        if(arr[i] > maxSoFar) {
            maxSoFar = arr[i];
            v.push_back(maxSoFar);
        }
    }

    reverse(v.begin(), v.end());

    return v;
}

int main(){
    int i, n;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];

    vector<int> res;
    res = findTheLeaders(a);
    for (i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}