
#include<bits/stdc++.h>
using namespace std;

// brute force approach
int apparOne(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            return arr[i];
        }
    }

}

// better solution

int apparOne1(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }

    int hash[maxi+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]==1)
        {
            return arr[i];
        }
    }

}

// more better approach
int apparOne2(int arr[],int n)
{
    unordered_map<long long, int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it : mp)
    {
        if(it.second ==1)
        {
            return it.first;
        }
    }
}

// optimal solution

int apparOne3(int arr[],int n)
{
    int xorr= 0;
    for(int i=0;i<n;i++)
    {
        xorr = xorr^arr[i];
    }
    return xorr;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int result=apparOne3(arr,n);
    cout<<result<<endl;
}
