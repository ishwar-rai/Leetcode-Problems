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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size = lists.size();
        if(size==0) return NULL;
        ListNode* head = new ListNode();
        ListNode* temp = head;
        vector<int> v;
        for(ListNode* list : lists){
            while(list){
                v.push_back(list->val);
                list = list->next;
            }
        }
        sort(v.begin(), v.end());
        for(int val : v){
            temp->next = new ListNode(val);
            temp = temp->next;
        }
        return head->next;
        
    }
};