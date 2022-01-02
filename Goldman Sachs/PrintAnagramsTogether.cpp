#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        vector<vector<string>> result;
        unordered_map<string, vector<int>> um;
        for (int i = 0; i < string_list.size(); i++)
        {
            string sortedStr = string_list[i];
            sort(all(sortedStr));
            um[sortedStr].push_back(i);
        }
        vector<string> temp;
        for (pair<string, vector<int>> idx : um)
        {
            temp.clear();
            for (int j = 0; j < idx.second.size(); j++)
            {
                temp.push_back(string_list[idx.second[j]]);
            }
            result.push_back(temp);
        }

        return result;
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
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        Solution ob;
        vector<vector<string>> result = ob.Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
