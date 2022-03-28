#include <bits/stdc++.h>
using namespace std;

int firstUniqueChar(string str) {
    // Write your code here
    unordered_map<char, int> m;

    for (int i = 0; i < str.length(); i++)
        m[str[i]]++;

    for (int i = 0; i < str.length(); i++) {
        if(m[str[i]] == 1)
            return i;
    }

    return -1;
}

int main() {
    string str;
    cin >> str;
    cout << firstUniqueChar(str);

    return 0;
}