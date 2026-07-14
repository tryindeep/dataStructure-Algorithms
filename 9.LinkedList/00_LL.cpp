#include <bits/stdc++.h>
using namespace std;

class Node  // struct
{

public:
    int data;   
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};

    Node *x = new Node(arr[0], nullptr);
     cout << x << endl;

    Node y = Node(arr[0], nullptr);
    cout << y.data << endl;

    Node z = Node(arr[0], nullptr);
    cout << z.next << endl;
   
    // because of new keyword 
    cout << x->data;
}