#include<bits/stdc++.h>
using namespace std;


/// brute force approach

//vector<vector<int>>rotateMatrix(vector<vector<int>>&matrix,int n, int m)
//{
//  vector<vector<int>>rotated(n,vector<int>(m));
//  for(int i=0;i<n;i++)
//  {
//      for(int j=0;j<m;j++){
//        rotated[j][n-i-1]= matrix[i][j];
//      }
//  }
//  return rotated;
//}


/// optimal approach

vector<vector<int>> rotateMatrix(vector<vector<int>>&matrix)
{
    int n = matrix.size();
    // transpose
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse

    for(int i=0;i<n;i++){
        // reverse row only
        reverse(matrix[i].begin(),matrix[i].end());
    }

    // note matrix reverse
    //reverse(matrix.begin(), matrix.end());

    return matrix;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

   // vector<vector<int>>rotated=rotateMatrix(matrix,n,m);
    vector<vector<int>>rotated=rotateMatrix(matrix);

    for(int i=0;i<rotated.size();i++){
        for(int j=0;j<rotated[0].size();j++)
        {
            cout<<rotated[i][j]<<" ";
        }
        cout<<endl;
    }
}


//3 3
//1 2 3
//4 5 6
//7 8 9
//
//7 4 1
//8 5 2
//9 6 3

