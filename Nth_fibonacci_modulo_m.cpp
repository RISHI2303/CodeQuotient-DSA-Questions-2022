#include <bits/stdc++.h>
using namespace std;

int nthFibonacciTerm(int n, int m)
{
    // Complete the given function
    int a = 0, b = 1, c;
    if (n == 0 || n == 1)
        return n % m;
    for (int i = 2; i <= n; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << nthFibonacciTerm(n, m);
    return 0;
}