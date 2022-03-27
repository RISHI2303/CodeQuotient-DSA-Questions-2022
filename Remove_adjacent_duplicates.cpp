#include <bits/stdc++.h>
using namespace std;

string removeAdjDup(string str, char last_removed)
{
    if (str.length() == 0 || str.length() == 1)
        return str;

    if (str[0] == str[1])
    {
        last_removed = str[0];
        while (str.length() > 1 && str[0] == str[1])
            str.erase(str.begin());
        str.erase(str.begin());
        return removeAdjDup(str, last_removed);
    }

    string rem_reduced_str = removeAdjDup(str.substr(1), last_removed);

    if (rem_reduced_str.length() > 0 && rem_reduced_str[0] == str[0])
    {
        last_removed = str[0];

        return rem_reduced_str.substr(1);
    }

    if (rem_reduced_str.length() == 0 && last_removed == str[0])
        return rem_reduced_str;

    return (str[0] + rem_reduced_str);
}

int totalPoints(string str)
{
    char last_removed = '\0';
    string finalStr = removeAdjDup(str, last_removed);

    return (str.length() - finalStr.length()) * 2;
}

int main() {
    int t, i, j = 0;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cout << totalPoints(a) << "\n";
    }
    return 0;
}