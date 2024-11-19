#include <bits\stdc++.h>
using namespace std;

bool solve(int a, int b, int c)
{
    if (a < c && a < b)
        swap(a, c);

    if (c <= b)
    {
        // cout << "c";
        return (b - a + b) > 0 && (b - a + b) % c == 0;
    }
    else if (b <= c)
    {
        // cout << "b";
        return (c - a) != 0 && (c - a) % 2 == 0 && (c - a) % b == 0;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;    
    cin >> n;
    int sum = 0;
    for (int i = 0; i<n/5; i++)
    {
        int min=INT_MAX;
        for (int j = 0; j<5; j++)
    {
        int tmp=0;
        cin >> tmp;
        if(min>tmp)min=tmp;
        sum+=tmp;
        cout<<tmp<<"  "<<min<<endl;
    }
    sum-=min;
    
    }
    cout << std::fixed << std::setprecision(5)<< (float)sum/(n-(n/5))<<endl;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int a, b, c;
    //     cin >> a >> b >> c;
    //     cout << (solve(a, b, c) ? "YES" : "NO") << endl;
    // }

    return 0;
}