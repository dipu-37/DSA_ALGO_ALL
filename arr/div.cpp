#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        string str;
        cin>>t>>str;
        int arr[t]= {0};
        int cnt=1;

            for(int i=t-2; i>=0; i--)
            {
                if(str[i]=='<') arr[i+1]=cnt,cnt++;
            }

            for(int i=0; i<t; i++)
            {
                if(arr[i]==0) arr[i]=cnt,cnt++;
            }


        for(int i=0; i<t; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
