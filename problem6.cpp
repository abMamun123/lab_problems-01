/**
 *author:xyz_123
 *created:12-01-2023(21:47:58)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k, flag = 0;
    cin >> k;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == k)
        {
            flag++;
            if (flag == 2)
                break;
        }
        if (a[mid] > k)
            right = mid - 1;
        else
            // (a[mid] < k)
            left = mid + 1;
    }
    if (flag == 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
