
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


/// better approach


int longestConsecutiveSequence(vector<int>&arr,int n)
{
   sort(arr.begin(),arr.end());
   int lastSmaller = INT_MIN;
   int cnt =0;
   int longest = 1;

   for(int i=0;i<n ; i++)
   {
       if(arr[i]-1 == lastSmaller){
        ///arr[i] next element of the current sequence

        cnt += 1;
        lastSmaller = arr[i];
       }
       else if(arr[i] != lastSmaller){
        cnt =1;
        lastSmaller = arr[i];
       }
       longest = max(longest, cnt);
   }

   return longest;
}

/// optimal solution


int longestConsecutiveSequence(vector<int>&arr,int n)
{
   if(n==0) return 0;
   int longest = 1;
   unordered_set<int>st;
   for(int i=0; i<n; i++)
   {
       st.insert(arr[i]);
   }

   for(auto it : st)
   {
       if(st.find(it-1) == st.end())
       {
           int cnt =1;
           int x = it ;

           while(st.find(x+1) !=st.end()){
            x++;
            cnt++;
           }
           longest = max(longest,cnt);
       }
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



