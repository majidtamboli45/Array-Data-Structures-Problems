#include<iostream>
#include<vector>
using namespace std;

int longestSubArraysum(vector<int> array , long long k)
{
    int left = 0;
    int right = 0;
    long long sum = array[0];
    int maxlen = 0;
    int n = array.size();

    while(right < n)
    {
        while(left <= right && sum > k)
        {
            sum -= array[left];
            left++;
        }

        if(sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }

        right++;

        if(right < n)
        {
            sum += array[right];
        }
    }
    return maxlen;
}

int main()
{
    vector<int> array = {1, 2, 3, 1, 1, 1, 1};
    long long k = 3;

    cout << "Longest subarray length = " << longestSubArraysum(array, k);
    return 0;
} 