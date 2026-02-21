#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long n = nums.size();
        
        long sum = 0, squareSum = 0;
        
        for(int num : nums) {
            sum += num;
            squareSum += (long)num * num;
        }
        
        long expectedSum = n * (n + 1) / 2;
        long expectedSquareSum = n * (n + 1) * (2 * n + 1) / 6;
        
        long diff = sum - expectedSum;                
        long squareDiff = squareSum - expectedSquareSum; 
        
        long sumXY = squareDiff / diff;                
        
        int x = (diff + sumXY) / 2;   // duplicate
        int y = x - diff;             // missing
        
        return {x, y};
    }
};

int main() {
    Solution sol;
    
    // Example input
    vector<int> nums = {1, 2, 2, 4};
    
    vector<int> result = sol.findErrorNums(nums);
    
    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;
    
    return 0;
}