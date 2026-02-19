#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int x : nums1) {
            freq[x]++;
        }

        for (int x : nums2) {
            if (freq[x] > 0) {
                result.push_back(x);
                freq[x]--;
            }
        }

        return result;
    }
};

int main() {
    int n, m;
    cin >> n;               // size of first array
    vector<int> nums1(n);
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cin >> m;               // size of second array
    vector<int> nums2(m);
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    Solution sol;
    vector<int> result = sol.intersect(nums1, nums2);

    // Print the intersection
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
