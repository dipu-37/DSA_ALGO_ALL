
#include<bits/stdc++.h>
using namespace std;

//brute force sloution

int find_missing_number(int arr[],int n)
{

    for(int i=1; i<=n; i++)
    {
        int flag=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break; //// inner loop will stop here, outer loop will continue
            }
        }

        if(flag==0) return i;
    }

}

// better solution
int find_missing_number2(int arr[],int n)
{

    int hash[n+1]= {0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }

}

// optimal approach
int find_missing_number3(int arr[],int n)
{

    int sum = (n*(n+1))/2;
    int sum2=0;
    for(int i=0;i<n-1;i++)
    {
         sum2 +=arr[i];
    }

    return sum-sum2;

}
// most optimal solution

int find_missing_number4(int arr[],int n)
{

   int xor1=0,xor2=0;

   for(int i=0;i<n-1;i++)
   {
       xor2 = xor2^arr[i];
       xor1= xor1^(i+1);
   }
   xor1=xor1^n;
   return xor1^xor2;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }

    int missing=find_missing_number4(arr,n);
    cout<<missing<<endl;
}
