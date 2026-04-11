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
Node* removesHead(Node* head){
    if(head == NULL) return head;
    Node* temp =  head;
    head =  head -> next;
    free(temp);
    return head;
}
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertA2LL(arr);
    head = removesHead(head);
    print(head);

}