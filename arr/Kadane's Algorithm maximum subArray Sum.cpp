
#include <bits/stdc++.h>
using namespace std;

/// brute force

int maxSubarraySum(int arr[],int n)
{
    int maxi = INT_MIN;

    for(int i=0; i< n; i++)
    {
        for(int j=i; j< n; j++)
        {
            /// subarray = arr[i...j];
            int sum =0;
            for(int k=i; k<=j; k++)
            {
                sum +=arr[k];
            }
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

/// better


int maxSubarraySum1(int arr[],int n)
{
    int maxi = INT_MIN;

    for(int i=0; i< n; i++)
    {
        int sum =0;
        for(int j=i; j< n; j++)
        {
            /// subarray = arr[i...j];
            sum +=arr[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

/// optimal

tuple<long long , int , int> maxSubarraySum2(int arr[],int n)
{
    long long maxi = LONG_MIN;
    long long sum = 0 ;
    int start, ansStart, ansEnd ;

    for(int i =0; i< n ; i++)
    {
        if(sum ==0) {start = i;}
        sum += arr[i];

        if(sum > maxi)
        {
            maxi = sum;
            ansStart = start ;
            ansEnd = i;
        }

        if(sum < 0)
        {
            sum = 0;
        }
    }

    return make_tuple(maxi, ansStart, ansEnd);

}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    ///9
    ///-2 1 -3 4 -1 2 1 -5 4
    /// 6 -- output
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    long long maxi;
    int ansStart, ansEnd;

    tie(maxi, ansStart, ansEnd)= maxSubarraySum2(arr, n);
    cout<<maxi<<endl;


}


/// tuple<>   make_tuple()  tie()
