#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        cout << (m - c + (long long)m * (n - r) + (long long)(n - r) * (m - 1)) << endl;
    }
}