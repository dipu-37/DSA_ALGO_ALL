
#include<bits/stdc++.h>
using namespace std;

void move_all_zero(int arr[], int n)
{

//    int j=0;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]!=0)
//        {
//            arr[j]=arr[i];
//            j++;
//        }
//    }
//
//    for(int i=j; i<n; i++)
//    {
//        arr[j]=0;
//        j++;
//    }



    // optimal approach

    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    for(int i=j+i; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    // note: j always point 0;



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

    move_all_zero(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

