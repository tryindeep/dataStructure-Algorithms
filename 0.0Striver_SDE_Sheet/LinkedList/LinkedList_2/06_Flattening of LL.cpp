#include <bits/stdc++.h>
using namespace std;

// Definition of special linked list
struct Node {
    int val;
    Node *next;
    Node *child;
    Node() {
        val = 0;
        next = NULL;
        child = NULL;
    }
    Node(int data1) {
        val = data1;
        next = NULL;
        child = NULL;
    }
   Node(int data1, Node *next1, Node* child1) {
    val = data1;
    next = next1;
    child = child1;   
}
};


class Solution {
    Node* merge2List(Node* l1, Node* l2) {
        Node* dummy = new Node(-1);
        Node* result = dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                result->child = l1;
                result = l1;
                l1 = l1->child;
            } else {
                result->child = l2;
                result = l2;
                l2 = l2->child;
            }
            result->next = NULL;
        }

        while (l1) {
            result->child = l1;
            result = l1;
            l1 = l1->child;
            result->next = NULL;
        }

        while (l2) {
            result->child = l2;
            result = l2;
            l2 = l2->child;
            result->next = NULL;
        }

        return dummy->child;
    }

public:
    Node* flatten(Node* root) {
        if (!root || !root->next)
            return root;

        Node* mergedHead = flatten(root->next);
        return merge2List(root, mergedHead);
    }
};