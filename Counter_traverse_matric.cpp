#include <bits/stdc++.h>
using namespace std;

#define N 10

/*
 * Complete the 'counterDiagonal' function below.
 * Print the counter diagonal traversal of the matrix, seperated by space
 * @params
 *   mat -> square matrix of size (n x n)
 *   n -> integer denoting size of square matrix
 */
void counterDiagonal(int mat[N][N], int n)
{
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = k;
        while (j >= 0 && i < n)
        {
            cout << mat[i][j] << " ";
            j--;
            i++;
        }
    }
    for (int r = 1; r < n; r++)
    {
        int i = r, j = n - 1;
        while (i < n && j >= 0)
        {
            cout << mat[i][j] << " ";
            j--;
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int mat[N][N];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    counterDiagonal(mat, n);

    return 0;
}