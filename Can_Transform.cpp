#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'canTransformed' function below.
 * @params
 *   a,b,c,d -> integers denoting the values of a,b,c,d respectively
 * @return
 *   1 if the numbers can be transformed , else 0
 */
int canTransformed(int a, int b, int c, int d) {
    // Write your code here
    if (a == c && b == d)
        return 1;
    else if (a > c || b > d)
        return 0;

    else {
        int sum = a + b;
        if (canTransformed(sum, b, c, d))
            return 1;
        else if (canTransformed(a, sum, c, d))
            return 1;
        else
            return 0;
    }
}

int main() {
    int t, a, b, c, d, r;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        r = canTransformed(a, b, c, d);
        cout << r << endl;
    }
    return 0;
}