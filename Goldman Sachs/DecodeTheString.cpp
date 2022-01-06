#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodedString(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.size(); ++i)
        {
            string temp;
            if (s[i] == ']')
            {
                while (!st.empty() && st.top() != '[')
                {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();
                int num = 0;
                string x = "";
                while (!st.empty() && isdigit(st.top()))
                {
                    x = st.top() + x;
                    st.pop();
                }
                num = stoi(x);
                string repeat;
                for (int j = 0; j < num; j++)
                {
                    repeat = temp + repeat;
                }
                for (char c : repeat)
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string res;
        while (!st.empty())
        {
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";
    }
    return 0;
}
