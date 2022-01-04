#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string encode(string src)
    {
        string ans = "";
        ans += src[0];
        int j = 0;
        for (int i = 1; i < src.size(); i++)
        {
            if (src[i] != src[i - 1])
            {
                ans += (to_string(i - j) + src[i]);
                j = i;
            }
        }
        ans += to_string(src.size() - j);
        return ans;
    }
};

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.encode(str) << endl;
    }
    return 0;
}
