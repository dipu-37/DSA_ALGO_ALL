#include<bits/stdc++.h>
using namespace std;
void left_rotate_array_by_k_place(int arr[], int n)
{
    int k=2;
    int temp[n];
    int j=0;
    for(int i=n-k; i<n; i++)
    {
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<n-k;i++)
    {
        temp[j]=arr[i];
        j++;
    }
    //arr[n-1]=temp;
    for(int i=0; i<n; i++)
    {
        cout<<temp[i]<<" ";
    }

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

    left_rotate_array_by_k_place(arr,n);


}

