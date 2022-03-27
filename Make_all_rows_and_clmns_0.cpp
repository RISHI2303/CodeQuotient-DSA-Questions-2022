#include <iostream>
#include <cstdio>
// Include headers as needed
#define ROWS 50
#define COLS 50
using namespace std;

void makeAllZero(int mat[ROWS][COLS], int r, int c)
{
    int i, j;
    int row[r], column[c];
    for (i = 0; i < r; i++)
        row[i] = 1;
    for (i = 0; i < c; i++)
        column[i] = 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] == 0)
            {
                row[i] = 0;
                column[j] = 0;
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (row[i] == 0 || column[j] == 0)
                mat[i][j] = 0;
        }
    }
}

int main()
{
    int r, c;
    cin >> r >> c;
    int a[ROWS][COLS], i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];
    makeAllZero(a, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}