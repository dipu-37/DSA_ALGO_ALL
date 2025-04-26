#include<bits/stdc++.h>
using namespace std;

vector<int>findMissingRepeating(vector<int>arr)
{
    int n=arr.size();
    int repeating = -1, missing =-1;

    for(int i=1;i<=n;i++)
    {
        int cnt =0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i) cnt++;
        }
        if(cnt ==2) repeating =i;
        else if(cnt ==0 ) missing =i;

        if(repeating != -1 && missing !=-1)
        {
            break;
        }
    }
    return {repeating, missing};
}
int main()
{
    vector<int>arr = {3,1,2,5,4,6,7,5};
    vector<int>ans = findMissingRepeating(arr);

    cout<<ans[0]<<" "<<ans[1]<<" ";

}
