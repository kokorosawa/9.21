/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* second = head;
        ListNode* origin = head;
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        int goal = count - n;
        if(goal==0) return origin->next;
        count=0;
        while(second){
            count++;
            if(goal==count){
                second->next=second->next->next;
            }
            second=second->next;
        }
        return origin;
    }
};