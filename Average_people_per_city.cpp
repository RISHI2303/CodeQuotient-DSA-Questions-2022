#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'findAverage' function below.
 * @params
 * n -> integer denoting the number of cities from 1 to n
 * m -> integer denoting the number of phases
 * arr -> 2-D vector with 'm' rows, where arr[i][0] denotes 'a',
 *        arr[i][1] denotes 'b' and arr[i][2] denotes 'k' for the ith phase
 *
 * @return
 * An integer denoting the average number of people settled per city.
 */

long long findAverage(int n, int m, vector<vector<int>> &arr) {
    // Write your code here
    long long sum = 0;
    for (int i = 0; i < m; i++) {
        long long a = arr[i][0];
        long long b = arr[i][1];
        long long k = arr[i][2];

        sum += (((b - a) + 1) * k);
    }

    return sum / n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> vec(3);
        cin >> vec[0] >> vec[1] >> vec[2];
        arr.push_back(vec);
    }
    cout << findAverage(n, m, arr);

    return 0;
}