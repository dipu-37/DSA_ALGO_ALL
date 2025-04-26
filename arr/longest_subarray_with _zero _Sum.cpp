#include <bits/stdc++.h>
using namespace std;

int longest_subarray_with_zero_Sum(int arr[], int n)
{
    map<int, int> mp;
    mp[0] = -1;
    int sum = 0;
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum) != mp.end())
        {
            int maxi = i - mp[sum];
            longest = max(maxi, longest);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return longest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int longest = longest_subarray_with_zero_Sum(arr, n);
    cout << longest << endl;
    return 0;
}
