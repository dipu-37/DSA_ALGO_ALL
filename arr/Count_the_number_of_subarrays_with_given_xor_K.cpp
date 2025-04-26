
#include<bits/bits/stdc++.h>
using namespace std;
int subarraysWithXor(int arr[],int k)
{
    int n= arr.size();
    int xr =0;
    map<int,int>mp;
    mp[xr]++; // 0->1
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        xr = xr^arr[i];
        int x = xr^k;
        cnt+=mp[x]; /// if x exist in the map

        mp[xr]++;
    }
    return cnt;
}
int main()
{
    vector<int>arr = {4,2,2,6,4};
    int k=6;
    int ans = subarraysWithXor(arr,k);
    cout<<ans;
}
