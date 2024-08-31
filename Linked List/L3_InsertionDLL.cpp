#include<bits/stdc++.h>
using namespace std;

// self define data type
struct Node{
    public: 
    int data; 
    Node* next; 
    Node* back; 

    public:
    Node (int data1, Node* next1, Node* back1){
        data=data1;  
        next=next1; 
        back=back1;

    }
    Node (int data1){
        data=data1;  
        next=nullptr;
        back=nullptr;
    }
};

// convert arr to LL
Node* convertToDLL(vector<int>&arr)
{
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i =1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i], nullptr, prev);
        // temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* InsertBeforeHead(Node* head, int val)
{
    Node* newNode = new Node(val, head, nullptr);
    head->back = newNode;

    return newNode;
}

Node* DeleteTail(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node* tail = head;
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;

    return head;
}

Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; 
    }

    Node* prev = head;      
    head = head->next;    

    head->back = nullptr;   

    prev->next = nullptr;  

    return head;          
}

Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;  
    }
    
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next; 
    }
    
    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    
    delete tail;  
    
    return head;
}

Node* DeleteKthElement(Node* head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL) {
        cnt++;
        if(cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }
    else if(prev == NULL)
    {
        deleteHead(head);
    }
    else if(front == NULL)
    {
        deleteTail(head);
    }
    prev -> next = front;
    front -> back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    
    return head;
}

void DeleteNode(Node* temp)
{
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL)
    {
        prev -> next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev -> next = front;
    front -> back = prev;
    temp -> next = nullptr;
    temp -> back = nullptr;
    delete temp;

}


int main(){

    vector<int> v {1,2,3,4,5,6};
    Node* head = convertToDLL(v);
    print(head);

    Node* insertBeforeHead = InsertBeforeHead(head,10);
    print(insertBeforeHead);

    // Node* deleteTail = DeleteTail(head);
    // print(deleteTail);

    // Node* deleteKthElement = DeleteKthElement(head, 3);
    // print(deleteKthElement);


    // DeleteNode(head->next);
    // print(head);
}