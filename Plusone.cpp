#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution obj;

    vector<int> digits = {9, 9, 9};

    vector<int> result = obj.plusOne(digits);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
