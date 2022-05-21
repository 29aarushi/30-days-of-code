#include <bits/stdc++.h>
#define endl "\n"

// Lawda pauchegi RCB playoffs

#define ll long long int
#define pb emplace_back
#define ppb pop_back
#define mp make_pair
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define REP(i, a, b) for (ll i = a; i > b; i--)
#define AND &&
#define OR ||
#define F first
#define S second
#define INF LLONG_MAX
#define MOD 1e9 + 7
#define um unordered_map
#define papuucoder() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

ll TestCase = 1;
int solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (z * 2 + x >= y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    papuucoder();
    cin >> TestCase;
    while (TestCase--)
    {
        solve();
    }

    return 0;
}
