#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int t;
    cin >> t;

    while(t--) {
        int r1, c1;
        cin >> r1 >> c1;
        int m1[r1][c1];

        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                cin >> m1[i][j];

        int r2, c2;
        cin >> r2 >> c2;
        int m2[r2][c2];

        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                cin >> m2[i][j];

        int ans[r1][c2];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                ans[i][j] = 0;

                for (int k = 0; k < r2; k++)
                    ans[i][j] += m1[i][k] * m2[k][j];

                cout << ans[i][j] << " ";
            }

            cout << endl;
        }    
    }

    // Return 0 to indicate normal termination
    return 0;
}