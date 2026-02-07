#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> result;

        for (int x : nums2) {
            if (s.count(x)) {
                result.push_back(x);
                s.erase(x); // ensures uniqueness
            }
        }
        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> ans = obj.intersection(nums1, nums2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
