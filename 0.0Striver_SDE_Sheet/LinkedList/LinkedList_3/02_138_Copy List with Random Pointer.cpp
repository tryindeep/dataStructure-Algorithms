#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
    void insertCopyInBetween(Node* head){
        Node* temp = head;
        while(temp != NULL){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp= copyNode->next;
        }
    }
    void connectionRondomPointer(Node* head){
        Node* temp = head;
        while(temp != NULL){
            Node* copyNode = temp->next;
            if(temp->random){
                copyNode->random = temp->random->next;
            }else{
                copyNode->random = nullptr;
            }
            temp = copyNode->next;
        }
    }
    Node* getDeepCopyList(Node* head){
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        Node* temp = head;
        while(temp != NULL){
            Node* copyNode = temp->next;
            
            res->next = copyNode;
            res= res->next;
            temp->next = copyNode->next;
            temp=temp->next;

        }
        return dummyNode->next;
    }
public:
    Node* copyRandomList(Node* head) {
        insertCopyInBetween(head);
        connectionRondomPointer(head);
        return getDeepCopyList(head);
    }
};