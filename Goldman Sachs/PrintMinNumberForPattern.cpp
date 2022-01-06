#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string printMinNumberForPattern(string S)
    {
        string ans = "";

        int i = 0;
        int cur = 1;
        int dCount = 0;
        while (i < S.length())
        {

            char ch = S[i];

            if (i == 0 && ch == 'I')
            {
                ans += to_string(cur);
                cur++;
            }

            if (ch == 'D')
            {
                dCount++;
            }

            int j = i + 1;
            while (j < S.length() && S[j] == 'D')
            {
                dCount++;
                j++;
            }

            int k = dCount;
            while (dCount >= 0)
            {
                ans += to_string(cur + dCount);
                dCount--;
            }

            cur += (k + 1);
            dCount = 0;
            i = j;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;
}
