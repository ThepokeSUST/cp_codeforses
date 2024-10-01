#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int *p;
    p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        cin >> p[i];

    long long sum = 0;

    for (int i = 0; i < n - 2; i++)
        sum += p[i];

    cout << (p[n - 1] - (p[n - 2] - sum)) << endl;

    free(p);
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}