#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    if (n == 1)
    {
        cout << "0\n";
        return;
    }
    if (n == 2)
    {
        cout << abs(vec[0] - vec[1]) << endl;
        return;
    }

    long long sum = 0;
    for (int i = 1; i < n; i++)
        sum += vec[i];

    long long chk = (sum + (n - 2)) / (n - 1);
    long long min;
    // cout << sum << " " << chk << endl;
    if (sum % (n - 1) == 0)
    {
        min = chk;
    }
    else
        min = sum % chk;

    if (vec[0] <= min)
    {
        cout << chk - vec[0] << endl;
    }
    else
    {
        //  cout << min << endl;
        sum += min;
        vec[0] = vec[0] - min;
        //  cout << "sum " << sum << endl;
        long long idx = ceil((float)sum / (n - 1));
        long long m;
        //  cout << idx << endl;
        if (sum % (n - 1) == 0)
            m = idx;
        else
            m = sum % idx;

        cout << idx - vec[0] << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}