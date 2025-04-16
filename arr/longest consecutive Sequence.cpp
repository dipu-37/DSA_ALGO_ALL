
#include<bits/stdc++.h>
using namespace std;

/// brute force approach
bool linearSearch(vector<int>&arr, int num){
    int n = arr.size();
    for(int i =0; i<n ;i++){
        if(arr[i]==num)
        {
            return true;
        }
    }
    return false;
}

int longestConsecutiveSequence(vector<int>&arr,int n)
{
    int longest = 1;
    for(int i=0; i< n ; i++)
    {
        int x=arr[i];
        int cnt = 1;
        while(linearSearch(arr, x+1)== true){
            x++;
            cnt++;
        }

        longest = max(longest, cnt);
    }
    return longest;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int x; cin >>x;
        arr.push_back(x);
    }


    int ans = longestConsecutiveSequence(arr, n);
    cout<<ans;


}



