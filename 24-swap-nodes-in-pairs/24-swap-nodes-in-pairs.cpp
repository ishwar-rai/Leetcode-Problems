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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;
        ListNode* f, *r, *temp;
        r = head;
        f = head->next;
        temp = head;
        head = head->next;
        while(temp->next){
            if(temp->next->next){
                temp = temp->next->next;
                if(temp->next) r->next = temp->next;
                else r->next = temp;
            } else {
                temp = r;
                r->next = NULL;
            }
            f->next = r;
            r = temp;
            f = temp->next;
            // if(!temp->next) temp->next=NULL;
                       
        }
        return head;
    }
};