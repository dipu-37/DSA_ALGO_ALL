
#include <bits/stdc++.h>
using namespace std;

/// optimal solution
int getLongestSubarray(int arr[],int n,int k)
{

    map<int,int>m;
    int l=0;
    m[0]=-1;
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];   /// current sum // (current-k) asa ki na?
        if(m.find(sum-k) !=m.end())
        {
            l=max(l,i-m[sum-k]);
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }
    }

    return l;

}

/// brute force

int getLongestSubarray(int arr[],int n,int k)
{
    int len = 0;
    for (int i=0; i<n; i++)   // starting index
    {
        long long s = 0; // Sum variable
        for (int j=i; j<n; j++)   // ending index
        {
            // add the current element to
            // the subarray a[i...j-1]:
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;


}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int len = getLongestSubarray(arr,n,k);
    cout<<len<<endl;
}
