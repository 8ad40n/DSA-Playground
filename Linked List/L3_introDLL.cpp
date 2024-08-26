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
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i =1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

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


int main(){

    vector<int> v {1,2,3,4,5,6};
    Node* head = convertToDLL(v);
    print(head);
}