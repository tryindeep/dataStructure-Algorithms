#include<stdio.h>
using namespace std;


//  * Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


//brute force 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        if(cnt == n){
            ListNode* newHead = head->next;
            delete(head);
            return newHead;
        }
        int res = cnt - n ; 
        temp=head;
        while(temp != NULL){
            res--;
            if(res ==0){
                break;
            }
            temp = temp->next;
        }
        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete(deleteNode);
        return head;
    }
};

// optimal 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=0; i < n ; i++){
            fast = fast->next;
        }
        if(fast == NULL ) return head->next;
        while(fast->next !=  NULL){
            slow = slow->next;
            fast= fast->next;
        }
        ListNode* deleteNode = slow->next;
        slow->next = slow->next->next;
        delete(deleteNode);
        return head;
    }
};
