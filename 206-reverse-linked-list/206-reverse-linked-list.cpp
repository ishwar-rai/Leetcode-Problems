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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return NULL;
        ListNode* rear=head, *front=head->next,*temp;
        rear->next=NULL;
        // temp=head->next;
        while(front!=NULL){
            temp = front->next;
            front->next = rear;
            rear = front;
            front = temp;
        }
        return rear;
    }
};