public class solution {

    public class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
        }
    }

    public void deleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode node = s.new ListNode(1);
        node.next = s.new ListNode(2);
        node.next.next = s.new ListNode(3);
        node.next.next.next = s.new ListNode(4);

        s.deleteNode(node.next);
        while (node != null) {
            System.out.println(node.val);
            node = node.next;
        }
    }
}
