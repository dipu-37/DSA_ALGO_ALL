#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int n; cin>>n;
    int element; cin>>element;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=linear_search(arr,n,element);
    cout<<index<<endl;
}
