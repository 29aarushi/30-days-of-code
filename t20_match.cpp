#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll T = 1;

int solve()
{
    int r, o, c;
    cin >> r >> o >> c;
    int rest = 20 - o;
    if (rest * 6 * 6 > (r - c))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
