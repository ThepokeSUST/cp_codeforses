#include <iostream>

using namespace std;

void solve()
{

    int l, r;
    cin >> l >> r;
    int idx = l;
    int ans = 1;
    int pre = -1;
    if (l + 1 <= r)
    {
        idx = l + 1;
        ans++;
        pre = l;
    }
    while (idx <= r and pre != -1)
    {

        int t = 2 * idx - pre + 1;
        pre = idx;
        idx = t;
        if (idx <= r)
            ans++;
    }

    cout << ans << endl;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}