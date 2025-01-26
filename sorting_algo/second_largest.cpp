#include<bits/stdc++.h>
using namespace std;
int second_largest_element(int arr[],int n)
{
    int largest = arr[0];
    int secondlargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = second_largest_element(arr,n);
    cout<<result<<endl;
}

//6
//1 2 4 7 7 5
