#include <bits/stdc++.h>
using namespace std;
#define MAX_LEN 100000

// return 1 for YES and 0 for NO.
int isRotation(string str1, string str2) {
    // Write your code here

    if(str1.length() != str2.length())
        return 0;

    str1.append(str1);

    if(str1.find(str2) == -1)
        return 0;

    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    char str1[MAX_LEN + 1], str2[MAX_LEN + 1];
    while (t--)
    {
        scanf("%s%s", str1, str2);
        if (isRotation(str1, str2))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}