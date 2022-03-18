#include <bits/stdc++.h>
using namespace std;

#define MAX_LEN 1000000

int countVowelSubstr(string str) {
    int count = 0, n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count = (count + (n - i) % 10007) % 10007;
    }
    return count;
}

int main() {
    char str[MAX_LEN + 1];
    scanf("%s", str);
    printf("%d", countVowelSubstr(str));
    return 0;
}