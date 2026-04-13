#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;

        // Step 1: find length + tail
        int n = 1;
        ListNode* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
            n++;
        }

        // Step 2: make circular
        tail->next = head;

        // Step 3: optimize k
        k = k % n;
        if(k == 0){
            tail->next = NULL;
            return head;
        }

        int steps = n - k;

        // Step 4: find new tail
        ListNode* newTail = head;
        for(int i = 1; i < steps; i++){
            newTail = newTail->next;
        }

        // Step 5: break
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};