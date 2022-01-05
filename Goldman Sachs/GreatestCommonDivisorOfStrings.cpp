#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // int gcd(int a, int b)
    // {
    //     if (a == 0)
    //     {
    //         return b;
    //     }
    //     if (b == 0)
    //     {
    //         return a;
    //     }
    //     return gcd(b, a % b);
    // }

    // string subStr(string str, int size) {
    //     string x = "";
    //     for (int i = 0; i < size; i++) {
    //         x += str[i];
    //     }
    //     return x;
    // }

public:
    string gcdOfstrings(string str1, string str2)
    {
        int a = str1.length();
        int b = str2.length();
        if (a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if ((str1 + str2) == (str2 + str1))
        {
            int size = __gcd(a, b);
            return str1.substr(0, size);
        }
        else
        {
            return "";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        Solution ob;
        cout << ob.gcdOfstrings(str1, str2) << "\n";
    }

    return 0;
}
