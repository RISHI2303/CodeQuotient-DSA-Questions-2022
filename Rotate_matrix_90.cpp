#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int i, j;
    int t;
    cin >> t;
    while (t--) {
        int n, r, c;
        cin >> n;
        int mat[n][n], res[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> mat[i][j];
        }
        
        for (j = 0; j < n; j++) {
            for (i = n - 1; i > 0; i--)
                cout << mat[i][j] << " ";
            cout << mat[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}