/**
 *author:xyz_123
 *created:12-01-2023(21:22:13)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
    for (int i = 0; i < a.size(); i++)
        sum += a[i];
    int total = n * (n + 1) / 2;
    int res = total - sum;
    cout << res;
    return 0;
}