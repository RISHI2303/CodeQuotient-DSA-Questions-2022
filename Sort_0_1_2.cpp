#include <bits/stdc++.h>
using namespace std;

void sorting012Array(int arr[], int n){
	// Write your code here  
    int count0 = 0, count1 = 0, count2 = 0, j = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] == 0)
            count0++;
        if(arr[i] == 1)
            count1++;
        if(arr[i] == 2)
            count2++;
    }

    for(int i=0; i<count0; i++)
        arr[j++] = 0;

    for(int i=0; i<count1; i++)
        arr[j++] = 1;

    for(int i=0; i<count2; i++)
        arr[j++] = 2;
}

int main() {
    int a[50];
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sorting012Array(a, n);
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}