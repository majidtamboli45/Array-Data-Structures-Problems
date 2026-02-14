#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int distinct = 1;

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] != nums[i - 1]) {
                distinct++;
            }
            if (distinct == 3) {
                return nums[i - 1];
            }
        }
        return nums[n - 1];
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 3, 1};

    cout << "Third Maximum Number: " << obj.thirdMax(nums) << endl;

    return 0;
}
