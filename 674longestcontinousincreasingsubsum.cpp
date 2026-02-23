#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n  = nums.size();
        
        if(n == 0) return 0;

        int count = 1;
        int maxcount = 1;

        for(int i = 1 ; i < n ; i++)
        {
            if(nums[i] > nums[i-1])
            {
                count++;
            }
            else
            {
                count = 1 ;
            }
            maxcount = max(count, maxcount);
        }
        return maxcount;
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.findLengthOfLCIS(nums);

    cout << "Length of Longest Continuous Increasing Subsequence: " 
         << result << endl;

    return 0;
}