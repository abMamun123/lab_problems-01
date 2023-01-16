/**
 *author:xyz_123
 *created:14-01-2023(00:01:39)
 **/
#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
        return a;
    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid; i++)
        b.push_back(a[i]);
    for (int i = mid; i < a.size(); i++)
        c.push_back(a[i]);
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);
    vector<int> sorted_a;
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (sorted_b.size() == idx1)
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (sorted_c.size() == idx2)
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        if (sorted_a.size() == n)
        {
            int i = 0, j = n - 1;
            int sum = 0;
            while (i < j)
            {
                if ((sorted_a[i] + sorted_a[j]) > k)
                {
                    j--;
                }
                else if ((sorted_a[i] + sorted_a[j]) < k)
                {
                    i++;
                }
                else if ((sorted_a[i] + sorted_a[j]) == k)
                {
                    sum++;
                    i++;
                    j--;
                }
            }
            cout << sum;
        }
    }
    return sorted_a;
};
int main()
{
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    vector<int> x = merge_sort(a);
    return 0;
}