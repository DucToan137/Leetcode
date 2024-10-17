public class solution {
    public class ListNode {
        int val;
        ListNode next;

        ListNode() {
        }

        ListNode(int val) {
            this.val = val;
        }

        ListNode(int val, ListNode next) {
            this.val = val;
            this.next = next;
        }
    }

    public ListNode deleteDuplicates(ListNode head) {
        if (head == null) {
            return null;
        }

        ListNode temp = new ListNode(0, head);
        ListNode prev = temp;
        while (head != null) {
            if (head.next != null && head.val == head.next.val) {
                while (head.next != null && head.val == head.next.val) {
                    head = head.next;
                }
                prev.next = head.next;
            } else {
                prev = prev.next;
            }
            head = head.next;
        }
        return temp.next;
    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode head = s.new ListNode(1);
        head.next = s.new ListNode(2);
        head.next.next = s.new ListNode(3);
        head.next.next.next = s.new ListNode(3);
        head.next.next.next.next = s.new ListNode(4);
        head.next.next.next.next.next = s.new ListNode(4);
        head.next.next.next.next.next.next = s.new ListNode(5);
        ListNode result = s.deleteDuplicates(head);
        while (result != null) {
            System.out.println(result.val);
            result = result.next;
        }
    }
}
