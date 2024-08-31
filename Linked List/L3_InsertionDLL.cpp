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



Node* InsertBeforeTail(Node* head, int val) {
    if(head->next == NULL)
    {
        Node* newNode = new Node(val, head, nullptr);
        head->back = newNode;
        return newNode;
    } 
    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    
    return head;
}


Node* InsertBeforeKthElement(Node* head, int val, int k) {
    if(k==1)
    {
        Node* newNode = new Node(val, head, nullptr);
        head->back = newNode;
        return newNode;
    } 
    Node* temp = head;
    int cnt =0;
    while(temp != NULL)
    {
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    
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

    // Node* insertBeforeHead = InsertBeforeHead(head,10);
    // print(insertBeforeHead);

    // Node* insertBeforeTail = InsertBeforeTail(head,10);
    // print(insertBeforeTail);

    Node* insertBeforeKthElement = InsertBeforeKthElement(head, 10, 3);
    print(insertBeforeKthElement);


    // DeleteNode(head->next);
    // print(head);
}