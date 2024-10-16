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

    public ListNode reverseBetween(ListNode head, int left, int right) {
        if (left == right)
            return head;

        ListNode temp = new ListNode(0);
        temp.next = head;
        ListNode pre = temp;
        for (int i = 0; i < left - 1; i++) {
            pre = pre.next;
        }

        ListNode cur = pre.next;
        for (int i = 0; i < right - left; ++i) {
            ListNode next = pre.next;
            pre.next = cur.next;
            cur.next = cur.next.next;
            pre.next.next = next;
        }

        return temp.next;
    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode head = s.new ListNode(1);
        head.next = s.new ListNode(2);
        head.next.next = s.new ListNode(3);
        head.next.next.next = s.new ListNode(4);
        head.next.next.next.next = s.new ListNode(5);
        ListNode res = s.reverseBetween(head, 2, 4);

        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }
}
