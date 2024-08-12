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

// Length
int LengthOfLL(Node* head)
{
    int cnt = 0;
    Node* temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
    
}

// Search 
int Search(Node* head, int val)
{
    Node* temp = head;
    while(temp)
    {
        if(temp->data==val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr={2,5,8,7};

    // initialization
    Node* y= new Node(arr[0]);
    Node* y1= new Node(arr[0], nullptr);
    cout<<y<<'\n'; 
    cout<<"First initialization: "<<y->data<<endl; 
    cout<<"Second initialization: "<<y1->data<<endl;



    vector<int> v {1,2,3,4,5,6};
    Node* head = convertToLL(v);
    cout<<"Head : "<< head->data <<endl;


    // Traversal:
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;

    cout<< "Length: "<< LengthOfLL(head)<<endl;

    cout<<"Found: "<< Search(head,4)<<endl;

}