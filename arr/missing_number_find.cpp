
 #include<bits/stdc++.h>
 using namespace std;

 //brute force sloution
 int find_missing_number(int arr[],int n)
 {

     for(int i=1;i<=n;i++)
     {
         int flag=0;
         for(int j=0;j<n;j++)
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

     int hash[n+1]={0};
     for(int i=0;i<n;i++)
     {
         hash[arr[i]]=1;
     }
     for(int i=1;i<=n;i++)
     {
         if(hash[i]==0)
         {
             return i;
         }
     }

 }
 int main()
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     int i=find_missing_number2(arr,n);
     cout<<i<<endl;
 }
