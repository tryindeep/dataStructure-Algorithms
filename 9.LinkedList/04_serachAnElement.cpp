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

int checkIfPresent (int element,Node* head ){
    Node* temp = head;
    while(temp){
        if(temp->data == element){
            return 1;
        }
        return 0;
    }
}
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
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertA2LL(arr);
    cout << checkIfPresent(12 , head);
    
}