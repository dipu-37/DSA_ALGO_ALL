

#include<bits/stdc++.h>
using namespace std;

void RearrangeArrayElementsbySign(int arr[],int n)
{
    vector<int>pos;
    vector<int>neg;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    /// positive index = 2*i ; negative index = 2*i +1;   i = 0....
    for(int i=0; i<n/2; i++)
    {
        arr[2*i]= pos[i];
        arr[2*i + 1] = neg[i];
    }

}



vector<int> RearrangeArrayElementsbySign1(int arr[],int n)
{
    /// vector<int>v ----> it allow push_back( )    not allow v[i] = something
    /// vector<int>v(n,0) or vector<int>(n)  ---> not allow for push_back()   only allow v[i]= something;
    /// vector<int>v = {1,2,3,}   both but v[i] == access or modify  ;   push_back()  ==== push in the last
    vector<int>ans(n,0);
    int posIndex = 0, negIndex = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    return ans ;

}



/// poroblem version - 02;

///  positive != negative    pos > neg or neg > pos

void RearrangeArrayElementsbySign(int arr[], int n)
{
    vector<int>pos, neg;

    for(int i=0 ; i<n; i++)
    {
        if(arr[i]> 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    if(pos.size() < neg.size())
    {
        for(int i=0 ; i< pos.size() ; i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        int index = pos.size() *2;

        for(int i=pos.size(); i< neg.size(); i++)
        {
            arr[index] = neg[i];
            index ++;
        }
    }else{

        for(int i=0; i<neg.size(); i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i]
        }

        int index = neg.size()*2;

        for(int i= neg.size(); i<pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }

    }

    ///return arr;
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

    vector<int>result = RearrangeArrayElementsbySign1(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<" ";
    }

}
