#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;

    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

// convert to ll
Node* convertToLL(vector<int>&arr)
{
    Node* head = new Node (arr[0]);
    Node* mover = head;

    for(int i =1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// print
Node* print(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Delete head
Node* DeleteHead(Node* head)
{
    Node* temp = head;
    head = head->next;
    // free(temp);
    delete  temp;
    return head;
}

int main()
{
    vector<int> arr={2,5,8,7};
    Node* head = convertToLL(arr);
    cout<<head->data<<endl;
    print(head);

    Node* deleteHead = DeleteHead(head);
    print(deleteHead);

}