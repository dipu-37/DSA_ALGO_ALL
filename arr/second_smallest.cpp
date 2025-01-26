#include<bits/stdc++.h>
using namespace std;
int second_smallest_element(int arr[],int n)
{
    int smallest = INT_MAX;
    int secondsmallest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<secondsmallest && arr[i]!=smallest)
        {
            secondsmallest = arr[i];
        }
    }
    return secondsmallest;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = second_smallest_element(arr,n);
    cout<<result<<endl;
}

//6
//1 2 4 7 7 5

