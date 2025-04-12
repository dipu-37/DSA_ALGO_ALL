
#include<bits/stdc++.h>
using namespace std;

void nextPermutaion(int arr[], int n)
{
   /// next_permutation(arr, arr+n);

   int ind = -1;
   for(int i = n-2; i>=0; i--)
   { /// arr[n-1] < arr[n]  ==== undefined if loop i = n-1
       if(arr[i] < arr[i+1])
       {
           ind = i;
           break;
       }
   }

   if(ind == -1){
    reverse(arr, arr+n);
   }

   for(int i= n-1; i>ind; i--)
   {
       if(arr[i]>arr[ind]){
        swap(arr[i],arr[ind]);
        break;
       }
   }

   reverse(arr+ind+1, arr+n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    nextPermutaion(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}


////7
////2 1 5 4 3 0 0
////2 3 0 0 1 4 5
