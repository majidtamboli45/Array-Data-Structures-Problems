#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

        for (int x : nums) {
            if (x == first || x == second || x == third) continue;

            if (x > first) {
                third = second;
                second = first;
                first = x;
            }
            else if (x > second) {
                third = second;
                second = x;
            }
            else if (x > third) {
                third = x;
            }
        }

        return (third == LLONG_MIN) ? first : third;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 3, 1};

    cout << "Third Maximum Number: " << obj.thirdMax(nums) << endl;

    return 0;
}
