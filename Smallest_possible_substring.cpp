#include <bits/stdc++.h>
using namespace std;

int smallestSubstringPossible(string str1, string str2) {
    // Write your code here
    int m[256] = {0};
    int ans = 100000;
    int start = 0;
    int count = 0;
    for (int i = 0; i < str2.length(); i++) {
        if (m[str2[i]] == 0)
            count++;
        m[str2[i]]++;
    }
    int i = 0;
    int j = 0;
    while (j < str1.length()) {
        m[str1[j]]--;
        if (m[str1[j]] == 0)
            count--;
        if (count == 0) {
            while (count == 0) {
                if (ans > j - i + 1) {
                    ans = min(ans, j - i + 1);
                    start = i;
                }
                m[str1[i]]++;
                if (m[str1[i]] > 0)
                    count++;
                i++;
            }
        }
        j++;
    }
    if (ans != 100000)
        return str1.substr(start, ans).length();
    else
        return -1;
}

int main() {
    int t, i, j = 0;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << smallestSubstringPossible(a, b) << endl;
    }
    return 0;
}