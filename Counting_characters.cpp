#include <bits/stdc++.h>
using namespace std;

void countFrequency(string str) {
    // write your code here
    map<char, int> m;

    for (int i = 0; i < str.length(); i++)
        m[str[i]]++;

    for (auto i : m)
        cout << i.first << i.second << " ";
}

int main() {
    string str;
    cin >> str;
    countFrequency(str);

    return 0;
}