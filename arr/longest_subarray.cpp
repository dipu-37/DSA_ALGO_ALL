#include<bits/stdc++.h>
using namespace std;
// brute force approach
int longest_subarray_length(int arr[],int n,int ksum)
{
    //vector<int>brr[100];
    int length=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            // add all the elements of
            // subarray = a[i...j]:
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            if(sum==ksum)
            {
                length=max(length,j-i+1);
            }

        }
    }
    return length;
}


// brute force approach 2

int longest_subarray_length2(int arr[],int n,int ksum)
{
    int length=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
           sum+=arr[j];
            if(sum==ksum)
            {
                length=max(length,j-i+1);
            }

        }
    }
    return length;
}

int longest_subarray_length2(int arr[],int n,int ksum)
{
    int length=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
           sum+=arr[j];
            if(sum==ksum)
            {
                length=max(length,j-i+1);
            }

        }
    }
    return length;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ksum;
    cin>>ksum;
    int length = longest_subarray_length2(arr,n,ksum);
    cout<<length<<endl;
}
