
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll T = 1;

int solve()
{
    ll n;
    cin >> n;
    ll A[n + 1];
    A[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    ll ans = 0, sumx = 0, sumy = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sumx += A[i];

        else
            sumy += A[i];
    }
    ll x = *max_element(A, A + n + 1);
    if (sumy >= sumx && sumy >= x)
        cout << sumy << endl;
    else if (sumx >= sumy && sumx >= x)
        cout << sumx << endl;
    else
        cout << x << endl;
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
