#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < n ; i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};

int main() {
    Solution s;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << s.maxProfit(prices) << endl;

    return 0;
}
