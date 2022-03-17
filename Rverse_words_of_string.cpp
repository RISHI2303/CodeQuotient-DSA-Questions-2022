#include <bits/stdc++.h>
using namespace std;

void revWordsString(string str) {
    // Write your code here
    int i = 0, j = 0;

    while (1) {
        if (j == str.length()) {
            reverse(str.begin() + i, str.end());
            break;
        }

        if (str.at(j) == ' ') {
            reverse(str.begin() + i, str.begin() + j);
            j++;
            i = j;
        }

        else
            j++;
    }

    cout << str;
}

int main()
{
    int t, i, j = 0;
    cin >> t;
    string str;
    while (t-- >= 0)
    {
        getline(cin, str);
        revWordsString(str);
        cout << endl;
    }
}