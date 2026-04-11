#include <bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
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
    bool isPalindrome(ListNode* head) {
       if(!head || !head->next) return true;

       // Step 1: find middle
       ListNode* fast = head;
       ListNode* slow = head;
       while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
       }

        // Step 2: reverse second half
        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Step 3: compare
        ListNode* first = head;
        ListNode* second = prev;
        bool isPalin = true;

        while(second){
            if(second->val != first->val){
                isPalin = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        // 🔥 Step 4: restore second half (IMPORTANT POSITION)
        curr = prev;
        prev = NULL;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        slow->next = prev;

        // Step 5: return result
        return isPalin;
    }
};