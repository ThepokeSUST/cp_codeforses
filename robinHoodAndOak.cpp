#include <cmath>
#include <iostream>
using namespace std;
void solve()
{

    int n, k;
    cin >> n >> k;

    int m = n - n % k;

    int ans = 0;
    m--;
    cout << m << endl;
    if (m < 0)
        m = 0;
    for (int i = m; i <= n; i++)
    {
        ans += pow(i, i);
    }

    // cout << ans << endl;
    if (ans % 2 == 0)
        cout << "yes\n";
    else
        cout << "no\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}