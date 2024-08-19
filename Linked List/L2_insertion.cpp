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

// Insert at Kth position
Node* InsertAtKPosition(Node* head, int el, int k)
{
    if(head == NULL)
    {
        if(k==1) return new Node(el);
        else return NULL;
    }
    if(k==1)
    {
        Node* temp = new Node(el,head);
        return temp;
    }
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt == k-1)
        {
            Node* x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            return head;
        }
        temp = temp->next;
    }
    return head;
}


// Insert before value
Node* InserBeforeValue(Node* head, int el, int val)
{
    if(head->data == NULL)
    {
        return new Node(el);
    }
    Node* temp = head;
    while(temp->next!=NULL)
    {
        if(temp->next->data == val)
        {
            Node* x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            return head;
        }
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

    // Node* insertHead = InsertHead(head, 100);
    // print(insertHead);

    // Node* insertTail = InsertTail(head, 100);
    // print(insertTail);

    // Node* insertAtKPosition = InsertAtKPosition(head,100,3);
    // print(insertAtKPosition);

    Node* inserBeforeValue = InserBeforeValue(head,100,8);
    print(inserBeforeValue);

}