/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if(head==null) return head;
        HashMap<Node, Node> map = new HashMap<>();
        Node temp = new Node(head.val);
        map.put(head, temp);
        Node head2 = temp;
        Node h = head.next;
        
        while(h!=null){
            temp.next = new Node(h.val);
            map.put(h, temp.next);
            temp=temp.next;
            h=h.next;
        }
        Node r=head2;
        while(r!=null){
            r.random = map.get(head.random);
            r=r.next;
            head=head.next;
        }
        return head2;
    }
}