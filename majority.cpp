#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        map<int,int> frequency;

        for(int i = 0 ; i < n ; i++) {
            frequency[arr[i]]++;
            if(frequency[arr[i]] > n/2) {
                return arr[i];
            }
        }
        return -1;
    }
};

int main() {
    // Predefined array (no user input)
    vector<int> arr = {2, 2, 1, 2, 3, 2, 2};

    Solution obj;
    int ans = obj.majorityElement(arr);

    cout << "Majority Element: " << ans << endl;

    return 0;
}
