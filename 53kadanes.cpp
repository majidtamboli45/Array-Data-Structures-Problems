#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currsum = 0;
        int maxsum = INT_MIN;

        for(int i = 0; i < n; i++) {
            currsum += nums[i];
            maxsum = max(currsum, maxsum);

            if(currsum < 0) {
                currsum = 0;
            }
        }
        return maxsum;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
