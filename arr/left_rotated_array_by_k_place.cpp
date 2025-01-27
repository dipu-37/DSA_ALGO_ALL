#include<bits/stdc++.h>
using namespace std;

//void Reverse(int arr[], int start, int end)
//{
//  while (start <= end)
//  {
//    int temp = arr[start];
//    arr[start] = arr[end];
//    arr[end] = temp;
//    start++;
//    end--;
//  }
//}


void left_rotate_array_by_k_place(int arr[], int n,int k)
{
    vector<int>temp;

    for(int i=0;i<k;i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=k; i<n; i++)
    {
        arr[i-k]=arr[i];
    }
    for(int i=n-k; i<n; i++)
    {
        arr[i]=temp[i-(n-k)]; // temp[i-(n-k)] 0,1,2,...
    }


    //apporach -02;

//    reverse(arr,arr+k);
//    reverse(arr+k,arr+n);
//    reverse(arr,arr+n);



}
int main()
{
    int n;
    cin>>n;
    int k; cin>>k;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    left_rotate_array_by_k_place(arr,n,k);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

