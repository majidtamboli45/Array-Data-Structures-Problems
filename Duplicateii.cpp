#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> lastindex;

        for(int i = 0; i < n; i++) {
            if(lastindex.count(nums[i])) {
                if(i - lastindex[nums[i]] <= k) {
                    return true;
                }
            }
            lastindex[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    if(sol.containsNearbyDuplicate(nums, k))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
