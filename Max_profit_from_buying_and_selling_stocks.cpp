#include <bits/stdc++.h>
using namespace std;

int findMaxProfit(vector<int> prices) {
    // Write your code here
    if(is_sorted(prices.rbegin(), prices.rend()))
        return 0;

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i=0; i<prices.size(); i++) {
        if(prices[i] < minPrice)
            minPrice = prices[i];

        else if(prices[i]-minPrice > maxProfit)
            maxProfit = prices[i]-minPrice;
    }

    return maxProfit;
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    cout << findMaxProfit(v) << endl;
    return 0;
}