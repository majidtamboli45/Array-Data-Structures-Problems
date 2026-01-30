#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty()) return "";
        
        string prefix = strs[0];
        int n = strs.size();
        for (int i = 1; i < n ; i++) {
            while (strs[i].find(prefix) != 0) 
            {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

int main() {
    Solution sol;

    // Hardcoded test case (no user input)
    vector<string> strs = {"flower", "flow", "flight"};

    string result = sol.longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
