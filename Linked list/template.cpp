#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(Node* &head, int val){
    Node* nd = new Node(val);
    if(head==NULL) {head=nd; return;}
    Node* tmp = head;
    while(tmp->next!=NULL) {
        tmp = tmp->next;
    }
    tmp->next=nd;

}
void rvrs(Node* &head){
    Node* prev=NULL;
    Node* cur = head;
    Node* next;
    while(cur!=NULL) {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur = next;
    }
    head=prev;
}
void insertAtHead(Node* &head, int val){

    Node* nd = new Node(val);
    nd->next=head;
    head = nd;
}
void display(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout<<tmp->data<<' ';

        tmp=tmp->next;
    }
}
void delet(Node* &head, int val) {

    Node* tmp = head;
    if(tmp->data==val) {
        head=tmp->next;
        return;
    }
    while(tmp->next->data!=val) {
        tmp=tmp->next;
    }
    Node* toDelete = tmp->next;
    tmp->next=tmp->next->next;
    delete toDelete;
}
int main(){
    Node* head=NULL;
    insertAtTail(head, 9);
    insertAtTail(head, 90);
    display(head);
    return 0;
}
