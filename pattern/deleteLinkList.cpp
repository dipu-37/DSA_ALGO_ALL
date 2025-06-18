#include<bits/stdc++.h>
using namespace std;

/// crate node
struct Node{
public:
    int data;
    Node* next;
public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

/// print linklist
void print(Node * head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
/// array to linkList

Node* createArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
/// delete head

Node* deleteHead(Node* head)
{
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    //free(temp);
    delete temp;
    return head;
}

/// delete tail

Node* deleteTail(Node* head)
{
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp = head;
    while(temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main()
{
    vector<int>arr={10,20,30,40,50,60,70};

    Node* head = createArr2LL(arr);
    /// delete head
    head = deleteHead(head);

    /// delete tail
    head = deleteTail(head);
    print(head);


}
