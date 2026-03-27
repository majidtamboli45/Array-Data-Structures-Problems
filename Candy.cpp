#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int sum = n / 2;

        unordered_set<int> uniqueValues;
        for (int i = 0; i < n; i++) {
            uniqueValues.insert(candyType[i]);
        }
        return min((int)uniqueValues.size(), sum);
    }
};

int main() {
    Solution obj;
    vector<int> candyType = {1, 1, 2, 2, 3, 3};

    cout << obj.distributeCandies(candyType);
    return 0;
}
