public class linkedList {
    public static void main(String[] args) {
        ListNode n0 = new ListNode(1);
        ListNode n1 = new ListNode(3);
        ListNode n2 = new ListNode(2);
        ListNode n3 = new ListNode(5);
        ListNode n4 = new ListNode(4);

        n0.next = n1;
        n1.next = n2;
        n2.next = n3;
        n3.next = n4;

        System.out.println(n0.value + "->" + n1.value + "->" + n2.value + "->" + n3.value + "->" + n4.value);
    }
}

class ListNode {
    int value; // Node value
    ListNode next;

    ListNode(int x) {
        value = x;
    }
}

