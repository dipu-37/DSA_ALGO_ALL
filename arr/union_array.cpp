#include<bits/stdc++.h>
using namespace std;
void union_of_arrays(int arr[],int n,int brr[],int m)
{
    vector<int>temp;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr[i]<=brr[j] )
        {
            if(temp.size()==0 || temp.back()!=arr[i])
            {
                temp.push_back(arr[i]);
                // i++;
            }
            i++;

        }
        else //brr[i]<=arr[i]
        {
            if(temp.size()==0|| temp.back()!=brr[j])
            {
                temp.push_back(brr[j]);
                //  j++;
            }
            j++;
        }
    }
    while(i<n)
    {
        if(temp.back()!=arr[i])
        {
            temp.push_back(arr[i]);
        }
        i++;

    }
    while(j<m)
    {
        if(temp.back()!=brr[j])
        {
            temp.push_back(brr[j]);
        }
        j++;
    }

    for(auto it : temp)
    {
        cout<<it<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int brr[m];
    for(int j=0; j<m; j++)
    {
        cin>>brr[j];
    }
    union_of_arrays(arr,n,brr,m);
}

//5
//1 2 3 4 5
//6
//2 3 4 4 5 6
