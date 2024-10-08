                                
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;  
    Node* next;     

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node *findMiddle(Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    int mid = count / 2 + 1;
    temp = head;

    while (temp != NULL) {
        mid = mid - 1;

        if (mid == 0){
            break;
        }
        temp = temp->next;
    }

    return temp;
}

Node* findMiddleOptimal(Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout<<findMiddle(head)->data<<endl;
    cout<<findMiddleOptimal(head)->data;

    return 0;
}
                                
                            