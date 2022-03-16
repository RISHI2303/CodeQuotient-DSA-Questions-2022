#include <bits/stdc++.h>
using namespace std;

string compressString(string str) {
    // Write your code here
    int i = 0, j = 0;
    string ans = "";

    while(j < str.length()) {
        j++;

        if(str[i] != str[j]) {
            ans += str[i];
            if((j - i) > 1) {
                ans += (to_string(j - i));
            }
            i = j;
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        string compressed = compressString(str);
        cout << compressed << endl;
    }
    return 0;
}