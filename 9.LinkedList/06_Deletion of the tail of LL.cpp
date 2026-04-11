#include <bits/stdc++.h>
using namespace std;

class Node // struct
{

public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node* convertA2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp ;
        // mover = mover.next
    }
    return head;
}
void print(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}


Node* removeTail(Node* head){
    if(head == NULL || head-> next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;

}
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertA2LL(arr);
    head = removeTail(head);
    print(head);

}