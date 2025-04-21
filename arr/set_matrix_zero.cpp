
#include<bits/stdc++.h>
using namespace std;


/// brute force approach

void makeRow(vector<vector<int>>&arr,int n, int m, int i)
{
    for(int j=0; j<m; j++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}

void makeCol(vector<vector<int>>&arr,int n, int m, int j)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}

vector<vector<int>>setMatrixZero(vector<vector<int>>&arr,int n, int m)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==0)
            {
                makeRow(arr,n,m,i);
                makeCol(arr,n,m,j);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==-1)
            {
                arr[i][j]=0;
            }
        }
    }

    return arr;
}


/// better approach

vector<vector<int>>setMatrixZero(vector<vector<int>>&arr,int n, int m)
{
    int row[n] = {0}; // row array
    int col[m] = {0};  // col array

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==0)
            {
                row[i] =1;
                col[i] =1;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(row[i] || col[j])
            {
                arr[i][j] =0;
            }

        }
    }

}



int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<vector<int>>ans= setMatrixZero(arr,n,m);

    for(auto it : ans)
    {
        for(auto ele : it)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
