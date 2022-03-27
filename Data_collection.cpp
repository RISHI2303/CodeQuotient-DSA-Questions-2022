#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int collectData(int height[], int n) {
    // Write your code here
    stack<int> s;
    unordered_map<int, int> m;
    s.push(height[0]);
    int sum = 0;
    for (int i = 1; i < n; i++) {
        while (!s.empty() && height[i] > s.top()) {
            sum += height[i];
            s.pop();
        }
        s.push(height[i]);
    }
    while (!s.empty()) {
        sum--;
        s.pop();
    }

    for (int i = 0; i < n; i++)
        sum += m[height[i]];

    return sum;
}

int main() {
    int n;
    cin >> n;
    int height[n];
    int i = 0;
    for (i = 0; i < n; i++)
        cin >> height[i];
    cout << collectData(height, n);
    return 0;
}