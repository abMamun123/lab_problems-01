#include <bits/stdc++.h>
using namespace std;

// Delete L to R element
vector<int> deleteElement(int A[], int L, int R, int N)
{
    //B index start in 0 index
    vector<int> B;

    for (int i = 1; i <= N; i++)
        if (i <L || i > R)
            B.push_back(A[i]);

    return B;
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 1; i <=n; i++)
        cin >> A[i];
    int L, R;
    cin >> L >> R;
    vector<int> res = deleteElement(A, L, R, n);
    int sz = res.size();
    //B index start in 0 index
    for (int i = 0; i < sz; i++)
        cout << res[i]<<" ";
    return 0;
}