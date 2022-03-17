#include <bits/stdc++.h>
using namespace std;

int romanToInt(string str) {
    // Complete the function
    unordered_map<char, int> m;
    int ans = 0;

    m.insert({'I', 1});
    m.insert({'V', 5});
    m.insert({'X', 10});
    m.insert({'L', 50});
    m.insert({'C', 100});
    m.insert({'D', 500});
    m.insert({'M', 1000});

    for (int i = 0; i < str.length(); i++) {
        int x = m[str[i]];
        if (i + 1 < str.length())
        {
            int y = m[str[i + 1]];
            if (x < y)
                ans -= x;
            else
                ans += x;
        }
        else
            ans += x;
    }

    return ans;
}

int main() {
    int t, i, j = 0;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        cout << romanToInt(a) << "\n";
    }
    return 0;
}