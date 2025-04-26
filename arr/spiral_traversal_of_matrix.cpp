#include<bits/stdc++.h>
using namespace std;

vector<int> printSpiral( vector<vector<int>>&mat)
{
    vector<int>ans;
    int n = mat.size();
    int m = mat[0].size();

    int top =0,left = 0, bottom = n-1, right = m-1;

    while(top<=bottom && left <= right)
    {
        ///right
        for(int i=left; i<=right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        ///bottom
        for(int i=top; i<=bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        ///left

        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        /// top

        if(left<=right)
        {
            for(int i=right; i>=left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            left++;
        }

        return ans;

    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }
    vector<int>ans = printSpiral(mat);
    for(int i = 0; i<ans.size(); i++)
    {

        cout<<ans[i]<<" ";
    }

}
