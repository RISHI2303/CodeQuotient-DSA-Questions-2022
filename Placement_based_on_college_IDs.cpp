#include <bits/stdc++.h>
using namespace std;

int maxStudents(int collegeIDs[], int n) {
    // Write your code here
    if(n == 0)
        return 0;
    
    sort(collegeIDs, collegeIDs + n);
    int temp = 0, maxSoFar = INT_MIN;

    for (int i = 1; i < n; i++) {
        if(collegeIDs[i] == collegeIDs[i-1])
            continue;
        else if (collegeIDs[i] == collegeIDs[i - 1] + 1)
            temp++;
        else
            temp = 0;
        maxSoFar = max(temp, maxSoFar);
    }

    if(maxSoFar != 1)
        return ++maxSoFar;

    return 1;
}

int main() {
    int i, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << maxStudents(a, n);
    return 0;
}