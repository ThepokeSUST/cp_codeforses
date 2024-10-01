#include <cmath>
#include <iostream>
using namespace std;

void solve()
{

    int n;
    int x, y;
    cin >> n >> x >> y;
    if (x < y)
        swap(x, y);
    cout << (n % y == 0 ? n / y : (n / y) + 1) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}