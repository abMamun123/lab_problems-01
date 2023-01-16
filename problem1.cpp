/**
 *author:xyz_123
 *created:12-01-2023(20:27:34)
 **/
#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> a)
{
    if (a.size() <= 1)
        return a;
    int pvot = rand() % (a.size());
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == pvot)
            continue;
        if (a[i] >= a[pvot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);
    vector<int> sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);
    sorted_a.push_back(a[pvot]);
    for (int i = 0; i < sorted_c.size(); i++)
        sorted_a.push_back(sorted_c[i]);
    return sorted_a;
};
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> res = quick_sort(a);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}