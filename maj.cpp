#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maj = 0;

        for(int num : nums) {
            if(count == 0) {
                maj = num;
            }

            if(num == maj) count++;
            else count--;
        }

        return maj;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}
