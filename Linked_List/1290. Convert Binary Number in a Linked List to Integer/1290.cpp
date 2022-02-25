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
    int getDecimalValue(ListNode* head) {
        int sum=0,count=1;
        ListNode* temp=head;
        while(head){
            count*=2;
            head=head->next;
        }
        while(temp){
            count/=2;
            if(temp->val==1) sum+=count;
            temp=temp->next;
        }
        return sum;
    }
};
