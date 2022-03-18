#include <bits/stdc++.h>
using namespace std;

int keywordCount(string str, string word) {
    string w;
    int count = 0;
    stringstream iss(str);
    while (iss >> w) {
        if (w == word)
            count++;
    }
    return count;
}

int main() {
    string str, word;
    getline(cin, str);
    getline(cin, word);

    cout << keywordCount(str, word);

    return 0;
}