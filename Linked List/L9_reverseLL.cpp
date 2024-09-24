#include<bits/stdc++.h>
using namespace std;

// self define data type
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

// convert arr to LL
Node* convertToLL(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i =1; i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* reverseLL(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    stack<int> st;
    Node* temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    
    temp = head;
    
    while(temp!=NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
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


int main(){

    vector<int> v {1,2,3,4,5,6};
    Node* head = convertToLL(v);
    print(head);
    Node* brute = reverseLL(head);
    print(brute);


}