#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int maxSum = 0, minLen = INT_MAX;
        for (int i = 0, j = 0; i < nums.size(); ++i)
        {
            maxSum += nums[i];

            while (maxSum >= target)
            {
                minLen = ((minLen > (i + 1 - j)) ? (i + 1 - j) : minLen);
                maxSum -= nums[j];
                ++j;
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int target;
        cin >> target;
        vector<int> nums;
        int temp;
        while (cin >> temp)
        {
            nums.emplace_back(temp);
        }
        Solution ob;
        cout << ob.minSubArrayLen(target, nums) << "\n";
    }
}
