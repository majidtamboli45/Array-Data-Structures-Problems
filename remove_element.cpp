#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int m = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[m] = nums[i];
                m++;
            }
        }
        return m;
    }
};

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value to remove: ";
    cin >> val;

    Solution sol;
    int newLength = sol.removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Updated array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
