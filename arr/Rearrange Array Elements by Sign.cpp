

#include<bits/stdc++.h>
using namespace std;

void RearrangeArrayElementsbySign(int arr[],int n)
{
    vector<int>pos;
    vector<int>neg;

    for(int i=0;i<n; i++)
    {
        if(arr[i]>0)
        {
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }

    for(int i=0;i<n/2; i++)
    {
        arr[2*i]= pos[i];
        arr[2*i + 1] = neg[i];
    }

}



int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    RearrangeArrayElementsbySign(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}
