#include <bits/stdc++.h>
using namespace std;
bool isSubset(int arr1[], int arr2[], int s1, int s2)
{
    int i = 0, j = 0;
    if (s2 < s1)
        return 0;
    sort(arr1, arr1 + s1);
    sort(arr2, arr2 + s2);
    while (i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j])
            return 0;
        else if (arr1[i] == arr2[j])
        {
            j++;
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
    }

    return (i >= s1) ? true : false;
}

int main()
{
    int s1;
    cin >> s1;
    int arr1[s1];
    for (int i = 0; i < s1; i++)
        cin >> arr1[i];
    int s2;
    cin >> s2;
    int arr2[s2];
    for (int j = 0; j < s2; j++)
        cin >> arr2[j];
    if (isSubset(arr1, arr2, s1, s2))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
