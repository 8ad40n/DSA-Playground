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
    if(head == NULL) return head;

    Node* temp = head;
    head = head->next;
    // free(temp);
    delete  temp;
    return head;
}
// Delete tail
Node* DeleteTail(Node* head)
{
    if (head == NULL || head->next == NULL) return NULL;

    Node* temp = head;
    while (temp->next->next != NULL) 
    {
        temp = temp->next;
    }
    delete temp->next;
   
    temp->next = nullptr;
    return head;
}

// Delete from position
Node* DeleteFromPosition(Node* head, int k)
{
    if(head == NULL) return head;
    if(k==1)
    {
       Node* temp = head;
       head = head->next;
       delete  temp;
       return head; 
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while (temp!= NULL)
    {
        cnt++;
        if(cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr={2,5,8,7};
    Node* head = convertToLL(arr);
    cout<<head->data<<endl;
    print(head);

    // Node* deleteHead = DeleteHead(head);
    // print(deleteHead);

    // Node* deleteTail = DeleteTail(head);
    // print(deleteTail);

    Node* deleteFromPosition = DeleteFromPosition(head,3);
    print(deleteFromPosition);

}