#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int prod1 = nums[n-1] * nums[n-2] * nums[n-3];
        int prod2 = nums[0] * nums[1] * nums[n-1];
        return max(prod1, prod2);
    }
};

int main() {
    Solution s;
    vector<int> nums = {-10, -10, 5, 2};
    cout << s.maximumProduct(nums);
    return 0;
}
