#include <bits/stdc++.h>
using namespace std;

long solveChallenges(int N, int arr[], int K, int challenges[]) {
    // Write your code here
    long ans = 0;

    for (int i = 0; i < K; i++) {
        int low = 0, high = N-1; 
        long first = -1, last = -1;

        // for first
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (arr[mid] > challenges[i])
                high = mid - 1;

            else if (arr[mid] < challenges[i])
                low = mid + 1;

            else
            {
                first = mid;
                high = mid - 1;
            }
        }

        if(first != -1) {
            low = 0;
            high = N - 1;

            // for last
            while (low <= high) {
                int mid = (low + high) / 2;

                if (arr[mid] > challenges[i])
                    high = mid - 1;

                else if (arr[mid] < challenges[i])
                    low = mid + 1;

                else
                {
                    last = mid;
                    low = mid + 1;
                }
            }
        }

        if(first!= -1 && last!= -1)
            ans += ((last - first) + 1);
    }

    return ans;
}

int main() {
    int i, k, size = 0, size1 = 0;
    cin >> size;
    int a[size];
    for (i = 0; i < size; i++)
        cin >> a[i];

    cin >> size1;
    int b[size1];
    for (i = 0; i < size1; i++)
        cin >> b[i];

    long final = solveChallenges(size, a, size1, b);
    cout << final;

    return 0;
}