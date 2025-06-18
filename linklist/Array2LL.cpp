#include<bits/stdc++.h>
using namespace std;

struct Node
{
public :
    int data;
    Node* next;
public :
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>&arr)
{
    Node* head = new Node(arr[0]);  ///head->data = 10, head->next = NULL
    Node* mover = head;
    for(int i=1; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);  ///head->data = 20, head->next = NULL
        mover->next = temp;   ///10 → 20
        mover = temp;
    }

    return head;

}

int lengthOfLL(Node* head)
{
    int cnt =0;
    Node* temp = head;
    while(temp)
    {
        //cout<<temp->data<<" ";
        temp = temp->next;
        cnt++;
    }

    return cnt;

}

int main()
{
    vector<int>arr= {10,20,30,40};
    Node* head = convertArr2LL(arr);
    // cout<<head->data;

    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;


    // length of the linklist

    cout<<"length of the linkList "<<lengthOfLL(head);
}
