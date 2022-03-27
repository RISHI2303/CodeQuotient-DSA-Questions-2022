#include <iostream>
#include <cstdio>

#define ROWS 50
#define COLS 50

using namespace std;

void printSpiral(int a[ROWS][COLS], int r, int c)
{
    int top = 0, down = r - 1, left = 0, right = c - 1;
    int dir = 0;
    while (top <= down && left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
                cout << a[top][i] << endl;
            top++;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
                cout << a[i][right] << endl;
            right--;
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
                cout << a[down][i] << endl;
            down--;
        }
        else if (dir == 3)
        {
            for (int i = down; i >= top; i--)
                cout << a[i][left] << endl;
            left++;
        }
        dir = (dir + 1) % 4;
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
    printSpiral(a, r, c);
    return 0;
}