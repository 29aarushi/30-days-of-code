#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
// ll A[1000000];

ll T;

int solve()
{
    ll n;
    cin >> n;
    
    //b^2 - 4ac 

    ll ans = (sqrt(1 + 4 * 2 * n) - 1) / 2;
    cout << ans << endl;
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
