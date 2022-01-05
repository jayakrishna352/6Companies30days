#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int kidGetsDamagedToy(int n, int m, int k)
    {
        return ((k + m - 1) % n);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        Solution ob;
        cout << ob.kidGetsDamagedToy(n, m, k) << "\n";
    }

    return 0;
}
