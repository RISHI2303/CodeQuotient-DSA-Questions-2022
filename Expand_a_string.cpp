#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1000

// Put the final string after expansion in 'res'
void expandString(char *str, char *res) {
    // Write your code here
    int n = strlen(str);
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        char c = str[i];
        int count = 1;
        char temp[50];
        int k = 0;
        while (i + 1 < n && str[i + 1] >= '0' && str[i + 1] <= '9') {
            temp[k] = str[i + 1];
            k++;
            i++;
        }
        temp[k] = '\0';
        if (strlen(temp) > 0)
            count = atoi(temp);
        while (count--)
        {
            res[j] = c;
            j++;
        }
    }
    res[j] = '\0';
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char str[100];
        scanf("%s", str);
        char res[MAX_LEN];
        expandString(str, res);
        printf("%s\n", res);
    }

    return 0;
}