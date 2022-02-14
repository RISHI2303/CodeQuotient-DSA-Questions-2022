#include <bits/stdc++.h>
using namespace std;

long long int multipleSum(int x){
    // Write your code here
    long long n;
    n = x/3;
    int sumOf3 = (n * (2*3 + (n-1)*3))/2;

    n = x/5;
    int sumOf5 = (n * (2*5 + (n-1)*5))/2;

    n = x/15;
    int sumOf15 = (n * (2*15 + (n-1)*15))/2;

    return sumOf3+sumOf5-sumOf15;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << multipleSum(x) << "\n";
    }
    return 0;
}