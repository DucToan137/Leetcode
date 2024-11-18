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

    public ListNode mergeNodes(ListNode head) {
        ListNode temp = head.next;
        ListNode res = new ListNode(-1);
        ListNode tempRes = res;
        int sum = 0;

        while (temp != null) {
            if (temp != null && temp.val != 0) {
                sum += temp.val;
            } else {
                tempRes.next = new ListNode(sum);
                tempRes = tempRes.next;
                sum = 0;
            }
            temp = temp.next;
        }

        return res.next;
    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode head = s.new ListNode(0);
        head.next = s.new ListNode(1);
        head.next.next = s.new ListNode(3);
        head.next.next.next = s.new ListNode(0);
        head.next.next.next.next = s.new ListNode(5);
        head.next.next.next.next.next = s.new ListNode(2);
        head.next.next.next.next.next.next = s.new ListNode(0);

        ListNode res = s.mergeNodes(head);

        while (res != null) {
            System.out.println(res.val);
            res = res.next;
        }
    }
}