#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mergeOverlappingIntervals(vector<vector<int>>&arr)
{
    int n = arr.size();
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(ans.empty()||arr[i][0] >ans.back()[1]){
            ans.push_back(arr[i]);
        }else{
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }

    }
    return ans;
}
int main()
{
//    int n,m;
//    cin>>n>>m;
//    vector<vector<int>>arr(n,vector<int>(m));
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++)
//        {
//            cin>>arr[i][j];
//
//        }
//    }
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>>ans = mergeOverlappingIntervals(arr);

    for(auto it : ans){
        cout<<"["<<it[0]<<","<<it[1]<<"]";
    }
    cout<<endl;
}
