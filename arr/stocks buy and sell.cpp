
#include<bits/stdc++.h>
using namespace std;

int stockBuyAndSell(int arr[], int n){

    /// profit = current price - minimum price

    int mini = arr[0];
    int  maxProfit = 0;
    for(int i=1; i<n ; i++)
    {
        int profit = arr[i]- mini;
        maxProfit = max(maxProfit, profit);
        mini = min(mini, arr[i]);
    }

    return maxProfit;

}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }

    int profit = stockBuyAndSell(arr,n);
    cout<<profit<<endl;
}


