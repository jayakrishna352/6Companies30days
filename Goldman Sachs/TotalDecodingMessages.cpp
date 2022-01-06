#include <bits/stdc++.h>
using namespace std;

class Solution
{
    long long mod = (1e9 + 7);

public:
    int CountWays(string str)
    {
        int n = str.size();

        long long count[n + 1];
        count[0] = 1;
        count[1] = 1;

        if (str[0] == '0')
        {
            return 0;
        }
        for (int i = 2; i <= n; i++)
        {
            count[i] = 0;

            if (str[i - 1] > '0')
            {
                count[i] = count[i - 1];
            }

            if (str[i - 2] == '1' ||
                (str[i - 2] == '2' && str[i - 1] < '7'))
            {
                count[i] += (count[i - 2] % mod);
            }
        }

        return (count[n] % mod);
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.CountWays(str);
        cout << ans << "\n";
    }
    return 0;
}
