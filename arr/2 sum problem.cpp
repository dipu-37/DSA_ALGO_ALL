
#include <bits/stdc++.h>
using namespace std;
/// brute force
//pair<int,int> TwoSumProblem(int arr[],int n,int terget)
//{
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n; j++)
//        {
//            if(i==j) continue;
//            if(arr[i]+arr[j]==terget)
//            {
//                return {i,j};
//            }
//        }
//    }
//}

/// better

// pair<int,int> TwoSumProblem(int arr[],int n,int terget)
//{
//    map<int,int>m;
//    for(int i=0;i<n;i++)
//    {
//        int a = arr[i];
//        int b= terget-a;
//        if(m.find(b) !=m.end())
//        {
//           /// return "YES";
//           return {m[b],i};
//
//        }
//        m[a]=i;
//    }
//    /// return "NO";
//    return{-1,-1};
//}

/// optimal for verity =1 ; yes no

string TwoSumProblem(int arr[],int n,int terget)
{
    int left = 0, right = n-1;
    sort(arr,arr+n);
    while(left<right)
    {
        int sum = arr[left]+arr[right];
        if(sum == terget){
            return "YES";
        }
        else if(sum < terget){
            left ++;
        }
        else{
            right++;
        }
    }

    return "NO";
}

int main()
{
    int n,terget;
    cin>>n>>terget;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

   string result= TwoSumProblem(arr,n,terget);
    cout<<result<<endl;
}

