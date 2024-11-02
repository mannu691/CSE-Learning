#include <bits\stdc++.h>
using namespace std;

void solve(string n)
{
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;

    map<string, int> db = {};
    while (t--)
    {
        string str;
        cin >> str;
        if (db.emplace(pair(str, 0)).second)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout<<str<<db.at(str)+1<<endl;
            db.insert_or_assign(str,db.at(str)+1);
        }
    }

    return 0;
}