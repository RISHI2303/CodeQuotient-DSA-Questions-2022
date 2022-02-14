#include <bits/stdc++.h>
using namespace std;

int getMajorityElement(int array[], int size) {
    //Enter Your Code
    int ele = 0, count = 1;

    for(int i=1; i<size; i++) {
        if(array[ele] == array[i])
            count++;
        else
            count--;

        if(count == 0) {
            ele = i;
            count = 1;
        }
    }

    if(count == 1)
        return -1;

    return count;
}

int main() {
    int i, size;
    cin >> size;
    int array[size];
    for (i = 0; i < size; i++)
        cin >> array[i];
    cout << getMajorityElement(array, size);
    return 0;
}