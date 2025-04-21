#include<bits/stdc++.h>
using namespace std;

int countSubArraySum(int arr[], int n,int k)
{
    map<int,int>mp;
    int preSum =0,cnt=0;
    mp[0]=1;
    for(int i=0; i<n; i++)
    {
        preSum +=arr[i];

//        if(mp.find(preSum-k)!=mp.end()){
//            cnt += mp[preSum-k];
//        }

        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mp[remove];




        mp[preSum]++;  /// frq of prefix sum
    }
    return cnt;
}
int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int cnt = countSubArraySum(arr,n,k);
    cout<<cnt<<endl;

}
//11
//3
//1 2 3 -3 1 1 1 4 2 2 -3
