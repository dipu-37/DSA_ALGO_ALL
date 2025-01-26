#include<bits/stdc++.h>
using namespace std;
bool is_sorted_orNOt(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {

        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result = is_sorted_orNOt(arr,n);
    if(result==true)
    {
        cout<<"array is sorted ";
    }else
    {
        cout<<"array is not sorted";
    }
}
