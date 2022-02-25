//mine:
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
    ListNode* middleNode(ListNode* head) {
        int count=0,mid;
        ListNode* temp=head;
        while(head){
            count++;
            head=head->next;
        }
        mid=(count/2)+1;
        count=0;
        while(temp){
            count++;
            if(count==mid) break;
            temp=temp->next;
        }
        return temp;
    }
};
//Discuss
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
