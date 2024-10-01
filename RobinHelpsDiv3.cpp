#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int have = 0;
    int cntzero = 0;
    int ans = 0;
    vector<int> vec(n);
    // input
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 0 and have != 0)
        {
            ans++;
            have--;
        }
        else if (vec[i] >= k)
        {
            have += vec[i];
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}