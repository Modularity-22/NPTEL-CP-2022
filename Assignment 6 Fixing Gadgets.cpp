#include <bits/stdc++.h>
#define tc    \
    int t;     \
    cin >> t; \
    while (t--)
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    unordered_map<int, vector<pair<int, int>>> mp;
    for (int i = 0; i < n; i++)
    {
        int s, f, p;
        cin >> s >> f >> p;
        mp[p].push_back({f, s}); // {dep, arrival}
    }
    int count = 0;
    for (auto e : mp)
    {
        sort(e.second.begin(), e.second.end());
        int res = 1;
        int i = 0;
        int j = 1;
        while (j < e.second.size())
        {
            if (e.second[j].second >= e.second[i].first)
            {
                res++;
                i = j;
            }
            j++;
        }
        count += res;
    }
    cout << count << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tc
    {
        solve();
    }

    return 0;
}