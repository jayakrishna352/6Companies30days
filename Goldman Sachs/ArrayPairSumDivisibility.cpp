#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        if (nums.size() % 2 == 1)
        {
            return false;
        }
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[(((nums[i] % k) + k) % k)]++;
        }

        for (int j = 0; j < nums.size(); j++)
        {
            int rem = (((nums[j] % k) + k) % k);
            if (rem == 0 && (freq[rem] & 1))
            {
                return false;
            }
            else if ((rem != 0) && (freq[rem] != freq[k - rem]))
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
