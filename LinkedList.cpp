#include<iostream>
using namespace std;
//head pointer stores the address of the first node
class node{
    public:
    //data members and pointer
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};
//we took head by refernece(&) as there are modifications for head 
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void insertAthead(node*&head,int val){
   node* n = new node(val);
   n->next = head;
   head = n;
}
//here we only take head as value
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}
bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deletion(node* &head,int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void deleteion1(node* &head,int val){
    node* temp2 = head;
    while(temp2->next->data!=val){
        temp2 = temp2->next;
    }
    node* toDelete = temp2->next;
    temp2->next = temp2->next->next;
    delete toDelete;
}
void findMiddle(node* head){
    if(head == NULL){
        cout<<"empty list cannot find the middle element"<<endl;
    }
    node* slowPtr = head;
    node* fastPtr = head;
    while(fastPtr!=NULL && fastPtr->next!=NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    cout<<"middle element is: "<<slowPtr->data<<endl;
}
bool LinkedListCycle(node* head){
    if(head == NULL){
        cout<<"empty list"<<endl;
        node* slowPtr = head;
        node* fastPtr = head;
        while(fastPtr && fastPtr->next){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr){
                return true;
                cout<<"there is a cycle"<<endl;
            }
        }
        return false;
        cout<<"there is no cycle"<<endl;
    }
}
int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAthead(head, 4);
    insertAthead(head,5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAthead(head, 9);
    insertAthead(head,10);
    


    // Call the function to find and print the middle element
    findMiddle(head);

    // Display the linked list
    display(head);
    if (LinkedListCycle(head))
        cout << "There is a cycle in the linked list" << endl;
    else
        cout << "There is no cycle in the linked list" << endl;


    // Free the memory by deleting the remaining nodes
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
