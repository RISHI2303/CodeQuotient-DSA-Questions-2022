#include <bits/stdc++.h>
using namespace std;

long power(int base, int exp) {
    // Write your code here
    if(base == 0)
        return 0;

    if(exp < 0)
        return -1;

    if(exp == 1)
        return base;

    long smallOutput = base * power(base, exp-1);

    return smallOutput;
}

int main() {
    int T, base, exp;
    cin >> T;
    while (T--) {
        cin >> base;
        cin >> exp;

        cout << power(base, exp) << endl;
    }

    return 0;
}