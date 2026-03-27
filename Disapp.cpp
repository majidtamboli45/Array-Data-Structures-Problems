#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> result = obj.findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
