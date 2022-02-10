#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertATHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n; 
}
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}
void deleteNode(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleteathead(head);
        return; 
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
bool search(node* head, int key){
    node* temp=head;
    while (temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextpt;

    while(currptr!=NULL){
        nextpt=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextpt;
    }
    return prevptr;
}

int main(){
     
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    //display(head);
    insertATHead(head,0);
    display(head);
    //cout<<search(head,1)<<endl;
    //deleteNode(head,3);
    //deleteathead(head);
    node* newhead= reverse(head);
    display(newhead);

   return 0;
}