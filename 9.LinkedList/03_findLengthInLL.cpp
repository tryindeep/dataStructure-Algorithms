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
int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
     while(temp){
        // cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
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
    Node* temp = head;
    int length = lengthOfLL(temp);
    cout << "length of the linkedList : " << length;
}