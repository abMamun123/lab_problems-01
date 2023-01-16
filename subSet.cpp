/**
 *author:xyz_123
 *created:13-01-2023(20:13:41)
 **/
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int B[], int left, int right, int k)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (B[mid] == k)
        {
            return 1;
        }
        if (B[mid] > k)
            right = mid - 1;
        else
            // (a[mid] < k)
            left = mid + 1;
    }
    return -1;
};
int array_subSet(int A[], int B[], int m, int n)
{
    sort(B, B + n);
    for (int i = 0; i < m; i++)
    {
        {
            int x = binarySearch(B, 0, n - 1, A[i]);
            if (x == -1)
                return -1;
        }
    };
    return 1;
};
int main()
{
    int m;
    cin >> m;
    int A[m];
    for (int i = 0; i < m; i++)
        cin >> A[i];
    int n;
    cin >> n;
    int B[n];
    for (int j = 0; j < n; j++)
        cin >> B[j];
    int res = array_subSet(A, B, m, n);
    if (res == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}