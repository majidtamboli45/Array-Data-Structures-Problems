#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Calculate sum of first k elements
        int currSum = 0;
        for(int i = 0; i < k; i++) {
            currSum += nums[i];
        }
        
        int maxSum = currSum;
        
        // Step 2: Sliding window
        for(int i = k; i < n; i++) {
            currSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, currSum);
        }
        
        return (double)maxSum / k;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    
    double result = obj.findMaxAverage(nums, k);
    
    cout << "Maximum Average: " << result << endl;
    
    return 0;
}