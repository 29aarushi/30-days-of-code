
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll T = 1;

int solve()
{
    int x, y, xr, yr, D;
    cin >> x >> y >> xr >> yr >> D;
    if ((xr * D > x) || (yr * D > y))
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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
