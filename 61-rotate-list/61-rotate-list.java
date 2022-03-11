/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || head.next==null || k==0) return head;
        ListNode sec;
        int len=1;
        for(sec = head; sec.next!=null; sec=sec.next) len++;
        int pos = len - k%len;
        if(pos == 0) return head;
        sec.next = head;
        for(int i=0; i<pos; i++){
            sec=sec.next;
        }
        head = sec.next;
        sec.next = null;
        return head;
    }
}