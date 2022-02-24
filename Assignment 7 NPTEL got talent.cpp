#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getparent(ll i, ll par[])
{
    while (i != par[i])
    {
        par[i] = par[par[i]];
        i = par[i];
    }
    return i;
}
void unionn(ll x, ll y, ll par[], ll wt[])
{
    x = getparent(x, par);
    y = getparent(y, par);
    if (wt[x] == wt[y])return;
    if (wt[x] > wt[y])par[y] = x;
    else if (wt[y] > wt[x])par[x] = y;
}
int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll wt[n + 1]; ll par[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> wt[i];
            par[i] = i;
        }
        ll q; cin >> q;
        while (q--)
        {
            ll type; cin >> type;
            if (type == 0)
            {
                ll x, y; cin >> x >> y;
                if (x == y)
                {
                    cout << "Invalid query!" << endl; continue;
                }
                unionn(x, y, par, wt);
            }
            else
            {
                ll x; cin >> x;
                cout << getparent(x, par) << endl;
            }
        }
    }
}