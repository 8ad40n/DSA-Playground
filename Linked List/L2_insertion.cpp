#include<bits/stdc++.h>
using namespace std;

struct Node{
    public: 
    int data; 
    Node* next; 

    public:
    Node (int data1, Node* next1){
        data=data1;  
        next=next1;  
    }
    Node (int data1){
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

// Insert at head
Node* InsertHead(Node* head, int val)
{
    if(head == NULL) return new Node(val);

    Node* temp = new Node(val,head);
    return temp;
}
// Insert at tail
Node* InsertTail(Node* head, int val)
{
    if(head == NULL) return new Node(val);

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(val);
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


// Delete with value
Node* DeleteWithValue(Node* head, int val)
{
    if(head == NULL) return head;
    if(head->data == val)
    {
       Node* temp = head;
       head = head->next;
       delete  temp;
       return head; 
    }

    Node* temp = head;
    Node* prev = NULL;

    while (temp!= NULL)
    {
        if(temp->data == val)
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

    Node* insertHead = InsertHead(head, 100);
    print(insertHead);

    Node* insertTail = InsertTail(head, 100);
    print(insertTail);

    // Node* deleteFromPosition = DeleteFromPosition(head,3);
    // print(deleteFromPosition);

    // Node* deleteWithValue = DeleteWithValue(head,5);
    // print(deleteWithValue);

}