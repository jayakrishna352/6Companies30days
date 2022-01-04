#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        if (k == 1)
        {
            return 0;
        }
        long long res = 1;
        int count = 0;
        for (int i = 0, j = 0; i < a.size(); ++i)
        {
            res *= a[i];

            while (res >= k)
            {
                res /= a[j];
                j++;
            }

            count += (i - j + 1);
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
