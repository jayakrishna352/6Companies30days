#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class Solution
{
public:
    ull getNthUglyNo(int n)
    {
        vector<ull> uglyNums(1, 1);
        int i = 0, j = 0, k = 0, size = 1;
        while (size < n)
        {
            uglyNums.push_back(min(uglyNums[i] * 2, min(uglyNums[j] * 3, uglyNums[k] * 5)));
            ull temp = uglyNums.back();
            if (temp == uglyNums[i] * 2)
            {
                ++i;
            }
            if (temp == uglyNums[j] * 3)
            {
                ++j;
            }
            if (temp == uglyNums[k] * 5)
            {
                ++k;
            }
            ++size;
        }
        return uglyNums[n - 1];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
