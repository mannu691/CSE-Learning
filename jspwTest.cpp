#include <iostream>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

void run(int n,int m,int r,int c){
    int dist=0;
    int l = r*n-m-c;
    for(int i = l+1;i<n*m;i++){
        dist+=abs((((i-2)%n)+1)-(((i-1)%n)+1))+abs((((i-2)%m)+1)-(((i-1)%m)+1));
    }
    cout << dist;
}

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        run(n,m,r,c);
    }
}