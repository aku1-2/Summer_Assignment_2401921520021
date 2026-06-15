/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        while(head!=NULL){
            ListNode *other=head->next;
            head->next=prev;
            prev=head;
            head=other;
        }
        return prev;
    }
};
