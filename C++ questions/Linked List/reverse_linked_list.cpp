#include <iostream>
#include "Node.cpp"
using namespace std;
void printLinkedList(Node *&head)
{
    Node*a = head;
    if (a == NULL)
    {cout<<endl;
    return;}
    else
    {
    cout << a->data << ' ';
    return printLinkedList(a->next);}
}
//(2 pointer approach, ek prev pointer and ek curr pointer har loop me dono aage badhenge)
void reverse_LL(Node* &head)
{
    Node* prev = NULL;
    Node* curr =  head;
    Node *temp_forward ;
    while(curr!=NULL)
    { 
    temp_forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp_forward;
    }
    head = prev;
}
// void reverse_LL_recursive(Node* &head)
// {
// head->next->next = head;
// head->next =NULL;
// }

int main(){
    Node* head  = new Node(1);
    Node* second  = new Node(head, 2);                          //1(a1) -> 2(a2) -> 5(a3) ->3(NULL)
    Node* third  = new Node(second,3);                          //a0         a1       a2     a3
    Node* fourth  = new Node(third,4);                         // 3(a2)  -> 5(a1) -> 2(a0) -> 1(Null)
    printLinkedList(head);
    // reverse_LL(head);                                          //  a3        a2       a1       a0
    // printLinkedList(head);
    // reverse_LL_recursive(fourth);
    printLinkedList(second);
    }