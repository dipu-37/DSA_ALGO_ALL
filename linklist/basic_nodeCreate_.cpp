
#include<bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    Node* next;

    Node(int value)
    {

        data = value;
        next = nullptr;

    }
};


int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;

    cout<<"Node Data: "<<first->data<<endl;
    cout<<"Node Data: "<<second->data<<endl;

    cout<<"Next: "<<first->next<<endl;

    Node* head = first;
    while(head !=nullptr){
            cout<<head->data<<"->";
        head = head ->next;
    }

    cout <<"NULL"<<endl;
}
