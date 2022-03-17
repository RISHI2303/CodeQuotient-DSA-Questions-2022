#include <bits/stdc++.h>
using namespace std;

bool belongToSameSpecies(string str1, string str2) {
    // Write your code here
    int i = 0, j = 0;
    int flag = 0;

    while(j < str2.length()) {
        if(i == str1.length()) {
            return false;
        }

        else if(str2[j] == str1[i]) {
            i++;
            j++;
        }

        else {
            i++;
        }
    }

    return true;
}

int main() {
    int t, i, j = 0;
    string str, match;
    cin >> t;
    while (t--) {
        cin >> str >> match;
        if (belongToSameSpecies(str, match)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << '\n';
    }
}