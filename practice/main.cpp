#include <bits\stdc++.h>
using namespace std;

void solve(int n)
{
    int num = (pow(10, n) - 1) / 3;
    for (int i = 0; i <= n; i++)
    {

        cout << num << ":" << num % 66 << endl;
        if (num % 66 == 0)
        {
            cout << num << endl;
            return;
        }
        if (num % (num % 66) != 0 && num%6!=0)
            i++;
        num += 3 * pow(10, i);
    }

    cout << -1 << endl;
}

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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}