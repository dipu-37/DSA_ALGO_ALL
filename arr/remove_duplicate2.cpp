#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    set<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st )
    {
        arr[index]=it;
        index++;
    }
    for(int i=0;i<st.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
