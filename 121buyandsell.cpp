#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minprice = prices[0];
        int maxprofit = 0;

        for (int i = 1; i < n; i++) {
            minprice = min(minprice, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
};

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    Solution obj;
    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}
