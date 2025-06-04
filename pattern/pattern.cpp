#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    int k=n;
    for(int i=1; i<=n; i++)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern2(int n)
{
    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k++;

    }
}

void pattern3(int n)
{

    int k=1;
    for(int i=1; i<=n; i++)
    {
        int start =1;
        for(int j=1; j<=k; j++)
        {
            cout<<start;
            start++;
            // cout<<j;
        }
        cout<<endl;
        k++;


    }
}


void pattern4(int n)
{

    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<k;
        }
        cout<<endl;
        k++;

    }
}

void pattern5(int n)
{

    int k=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        k--;

        cout<<endl;
    }
}

void pattern6(int n)
{

    int k=n;
    for(int i=1; i<=n; i++)
    {
        int start =1;
        for(int j=1; j<=k; j++)
        {
            cout<<start;
            start++;
            // cout<<j;
        }
        k--;

        cout<<endl;
    }
}


void pattern7(int n)
{
    int k=1;
    int space = n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int kk=1; kk<=k; kk++)
        {
            cout<<"*";
        }

        space--;
        k+=2;

        cout<<endl;
    }
}

void pattern8(int n)
{
    int k=n+2;
    int space = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int kk=1; kk<=k; kk++)
        {
            cout<<"*";
        }

        space++;
        k-=2;

        cout<<endl;
    }
}


void pattern9(int n)
{
    int k=1;
    int space =n-1;
    for(int i=1; i<=2*n; i++)
    {

        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
        {
            space--;
            k+=2;
        }
        else if(i>n)  //else
        {
            space++;
            k-=2;
        }
    }
}

void pattern10(int n)
{
    int k=1;
    for(int i=1; i<=2*n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
        {
            k++;
        }
        else
        {
            k--;
        }

    }
}

void pattern11(int n)
{

    int k=1;
    int start =1;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0) start =0;
        else start =1;
        for(int j=1; j<=k; j++)
        {
            cout<<start;
            start = 1- start;
        }
        cout<<endl;
        k++;

    }
}

void pattern12(int n)
{
    int k=1,space=n+2;
    for(int i=1; i<=n; i++)
    {
        int start =1;
        int start1=k;
        for(int j=1; j<=k; j++)
        {
            //cout<<"*";
            cout<<start;
            start++;
        }
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=k; j++)
        {
            // cout<<"*";
            cout<<start1;
            start1--;

        }
        cout<<endl;
        k++;
        space-=2;
    }
}

void pattern13(int n)
{
    int k=1;
    int start=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
        k++;
    }
}

void pattern14(int n)
{
    int k=1;
    for(int i=1; i<=n; i++)
    {
        char ch = 'A';
        for(int j=1; j<=k; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        k++;
    }
}


void pattern15(int n)
{
    int k=1;
    for(int i=1; i<=n; i++)
    {
        char ch = 'A';
        for(int j=1; j<=k; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        k++;
    }
}

void pattern16(int n)
{
    int k=n;
    for(int i=1; i<=n; i++)
    {
        char ch='A';
        for(int j=1; j<=k; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        k--;
    }
}


void pattern17(int n)
{
    int k=1;
    char ch='A';
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        k++;
        ch++;

    }
}

void pattern18(int n)
{
    int k=1;
    int space = n-1;
    for(int i=1; i<=n; i++)
    {
        char ch='A';
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=k/2; j++)
        {
            cout<<ch;
            ch++;
        }
        // cout<<"print char " <<ch;
        char ch2 = ch;
        for(int j=(k/2)+1; j<=k; j++)
        {
            cout<<ch2;
            ch2--;
        }

        cout<<endl;
        space--;
        k+=2;



    }
}

void pattern19(int n)
{
    int k=1;
    char ch='A'+(n-1);
    for(int i=1; i<=n; i++)
    {
        char start= ch;
        for(int j=1; j<=k; j++)
        {
            cout<<start;
            start++;
        }
        cout<<endl;
        k++;
        ch--;
    }
}

void pattern20(int n)
{
    int k=n;
    int space = 0;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
        {
            k--;
            space+=2;
        }
        else
        {
            k++;
            space-=2;
        }
    }
}

void pattern21(int n)
{
    int k=1;
    int space=2*n-2;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
        {
            k++;
            space-=2;
        }
        else if(i>=n)
        {
            k--;
            space+=2;
        }
    }

}

void pattern22(int n)
{
    int k=n; int space = n-1;
    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(int j=1;j<=k;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }else{
            for(int j=1;j<=k;j++)
            {
                if(j==1 || j==k)
                {
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}

int main()
{
    int n=10;

    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);


}
