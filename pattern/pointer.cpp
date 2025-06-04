#include<bits/stdc++.h>
using namespace std;

/// array pass
void functionOfArray(int *arr)
{
    arr[0]=100;
    //arr[0]=*(arr)
    //arr[1]=*(arr+1)
}

/// pass by value
void fun(int x)
{
    x=100;
    cout<<&x<<endl;
}

/// pass by reference
void func(int *p)
{
    *p=40;
    cout<<p<<endl;

}
/// reference
void funct(int &z)
{
    z=300;
}

int main()
{
    /// pointer

    int a =10;
    int *p = &a;
    cout<<p<<" "<<&a<<endl;  // same output 0x61fe44 0x61fe44
    cout<<*p<<endl;  // 10

    /// pointer  of pointer

    int b=10;
    int * ptr=&b;
    int * *q=&ptr;

    cout<<q<<" "<<&ptr<<endl;
    cout<<*q<<" "<<&b<<endl;
    cout<<**q<<endl;  // 10

    /// array is a pointer

    int arr[]={1,2,3,4,5};

    cout<<arr+1<<" "<<&arr[1]<<endl;
    cout<<*(arr+1)<<" "<<arr[1]<<endl;

    functionOfArray(arr);  // default address pass
    cout<<arr[0]<<endl; //100


    /// call/pass by value
    int x=20;
    fun(x);
    cout<<&x<<endl;

    /// pass by reference

    int y=30;
    func(&y);
    cout<<&y<<endl;  // &y = p
    cout<<y<<endl;  // 40

    /// reference

    int z=11;
    funct(z);
    cout<<z<<endl; // 300

    /// constant variable pointer

    const int c=10;
    const int *ptrr=&c;
    //*ptrr = 200; not posible
    cout<<ptrr<<" "<<*ptrr<<endl;

    /// constant pointer

    int d=10;
    int * const ptrrr= &d;

    /// constant variable constant pointer

    const int e=10;
    const int * const ptrrrr = &a;

    ///

}
