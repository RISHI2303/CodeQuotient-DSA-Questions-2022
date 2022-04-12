#include <bits/stdc++.h>
using namespace std;
#define MAX_LEN 100000

int minReversal(string expr) {
    // Write your code here
    int len = expr.length();
    if (len % 2)
        return -1;

    stack<char> s;

    for (int i = 0; i < len; i++) {
        if (expr[i] == ']' && !s.empty()) {
            if (s.top() == '[')
                s.pop();
            else
                s.push(expr[i]);
        }
        else
            s.push(expr[i]);
    }

    int count = s.size();

    float m, n = 0;
    while (!s.empty() && s.top() == '[') {
        n++;
        s.pop();
    }
    m = count - n;
    return (ceil(m / 2) + ceil(n / 2));
}

int main() {
    int t, ans;
    cin >> t;
    while (t--) {
        char expr[MAX_LEN + 1];
        cin >> expr;
        ans = minReversal(expr);
        cout << ans << endl;
    }
    return 0;
}