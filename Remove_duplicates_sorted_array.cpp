#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int *arr, int *size) {
    int j = 1;
    int temp = *(size);
    for (int i = 1; i < *(size); i++) {
        if (arr[i] != arr[i - 1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    *size = j;
}

int main() {
    int i, size = 0;
    cin >> size;

    int arr[size];
    for(i = 0; i < size; i++) 
        cin >> arr[i];

    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++) 
        cout << arr[i] << " ";
  
    return 0;
}