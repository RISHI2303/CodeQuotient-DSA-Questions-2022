#include <bits/stdc++.h>
using namespace std;

bool isEqual(char c1, char c2) {
    if(c1 == '(' && c2 == ')')
        return true;

    else if (c1 == '[' && c2 == ']')
        return true;

    else if (c1 == '{' && c2 == '}')
        return true;
    
    else
        return false;
}

bool areBracketsBalanced(char exp[]) {
    // Write your code here
    stack<char> s;
    int i = 0;

    while(exp[i]) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            s.push(exp[i]);

        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (s.empty() || !isEqual(s.top(), exp[i]))
                return false;

            else
                s.pop();
        }

        i++;
    }

    return s.empty();
}

int main() {
    char exp[100] = "2+2";
    scanf("%s", exp);
    if (areBracketsBalanced(exp))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}