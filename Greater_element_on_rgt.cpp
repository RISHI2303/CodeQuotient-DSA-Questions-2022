#include <bits/stdc++.h>
using namespace std;

void printNextGreaterElement(int arr[], int n) {
    // Write your code here
    stack<int> st;
    unordered_map<int, int> m;

    st.push(arr[0]);

    for (int i = 1; i < n; i++) {
        while (!st.empty() && arr[i] > st.top()) {
            m[st.top()] = arr[i];
            st.pop();
        }
        st.push(arr[i]);
    }

    while(!st.empty()){
        m[st.top()] = -1;
        st.pop();
    }

    for (int i = 0; i < n; i++)
        cout << m[arr[i]] << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i = 0;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printNextGreaterElement(arr, n);
        cout << endl;
    }
    return 0;
}