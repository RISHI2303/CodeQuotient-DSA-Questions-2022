#include <bits/stdc++.h>
using namespace std;

void moveElements(vector <int> arr) {
    // Write your code here
    int n = arr.size();
    int temp[n], j=0;

    for(int i=0; i<n; i++)
        if(arr[i] >= 0)
            temp[j++] = arr[i];

    for(int i=0; i<n; i++)
        if(arr[i] < 0)
            temp[j++] = arr[i];

    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    
    return 0;
}