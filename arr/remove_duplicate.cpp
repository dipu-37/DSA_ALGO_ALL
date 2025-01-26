// remove duplicate element in a sorted array;
#include<bits/stdc++.h>
using namespace std;
void remove_duplicate(int arr[],int n)
{
    vector<int>temp;
    for(int i=1;i<n;i++)
    {
       if(arr[i]!=arr[i-1])
       {
           temp.push_back(arr[i]);
       }
    }

    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }

}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    remove_duplicate(arr,n);

}
// broutforce apporach
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


// optimal approach :

#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int arr[],int n)
{
    int i=0;
    for(int j=1; j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index = remove_duplicate(arr,n);
    for(int i=0;i<index;i++)
    {
        cout<<arr[i]<<" ";
    }
}

