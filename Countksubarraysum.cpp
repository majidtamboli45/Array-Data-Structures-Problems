#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> map;
        map[0] = 1;

        int preSum = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            int remove = preSum - k;
            count += map[remove];
            map[preSum]++;
        }
        return count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};
    int k = 3;

    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " = " << result << endl;

    return 0;
}
