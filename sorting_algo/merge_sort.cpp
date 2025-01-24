#include<bits/stdc++.h>
using namespace std;

void merges(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right <=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];

    }



}
int mergesort(vector<int>&arr,int low,int high)
{
    if(low >=high) return 0;
    int mid =(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merges(arr, low, mid,high);

}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for( int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int low =0;
    int high = n;

    mergesort(arr,low,high);

    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
