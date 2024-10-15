#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for (auto &ele : vec)
    {
        cin >> ele;
    }

    sort(vec.begin(), vec.end());

    int ans = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        int ele = (vec[i] + ans) / 2;
        ans = ele;
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
