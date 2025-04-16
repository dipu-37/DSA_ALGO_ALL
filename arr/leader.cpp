

#include<bits/stdc++.h>
using namespace std;

vector<int> printLeadersBruteForce(int arr[], int n)
{
    vector<int>ans;

    for(int i=0; i<n; i++)
    {
        bool leader = true;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>arr[i])
            {
                leader = false;
                break;
            }
        }
        if(leader)
        {
            ans.push_back(arr[i]);
        }

    }

    return ans;

}

vector<int> printLeadersOptimal(int arr[],int n)
{
    vector<int>ans;

    int maxi = arr[n-1];
    ans.push_back(arr[n-1]);

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }

        /// maxi=max(maxi,arr[i])
    }

    return ans;
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

    //vector<int>ans = printLeadersBruteForce(arr,n);
    vector<int>ans = printLeadersOptimal(arr,n);
    for(int i = 0; i<ans.size(); i++)
    {

        cout<<ans[i]<<" ";
    }



}

//6
//10 22 12 3 0 6
//22 12 6


