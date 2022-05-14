
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll T = 1;

int solve()
{
    int x;
    cin >> x;
    if (x % 4 == 0)
        cout << "North" << endl;
    else if (x % 4 == 1)
        cout << "East" << endl;
    else if (x % 4 == 2)
        cout << "South" << endl;
    else
        cout << "West" << endl;
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
