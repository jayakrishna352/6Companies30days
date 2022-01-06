#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> max10NumsIn10M(vector<long long> &arr)
    {

        priority_queue<long long> pq;
        pq.push(1);
        for (int j = 0; j < arr.size(); j++)
        {
            if (pq.top() < arr[j])
            {
                pq.push(arr[j]);
            }
        }
        vector<long long> ans;
        int count = 0;
        while (pq.empty() == 0 && count < 10)
        {
            ans.emplace_back(pq.top());
            pq.pop();
            ++count;
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
        vector<long long> list;
        for (int i = 0; i < 1e7; i++)
        {
            list.emplace_back(rand() * 100);
        }
        Solution ob;
        for (auto val : ob.max10NumsIn10M(list))
        {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}
