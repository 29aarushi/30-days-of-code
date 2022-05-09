#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll T = 1;

void solve()
{
    ll n, k, s;
    cin >> n >> k >> s;
    cout << ((s) - (n * n)) / (k-1) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
