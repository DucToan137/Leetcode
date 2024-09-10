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

    public int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public ListNode insertGreatestCommonDivisors(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }

        ListNode temp1 = head;
        ListNode temp2 = head.next;

        while (temp2 != null) {
            int _gcd = gcd(temp1.val, temp2.val);
            ListNode newNode = new ListNode(_gcd);

            temp1.next = newNode;
            newNode.next = temp2;

            temp1 = temp2;
            temp2 = temp2.next;
        }
        return head;
    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode head = s.new ListNode(2);
        head.next = s.new ListNode(4);
        head.next.next = s.new ListNode(6);
        head.next.next.next = s.new ListNode(8);
        head.next.next.next.next = s.new ListNode(10);
        head.next.next.next.next.next = s.new ListNode(12);
        head.next.next.next.next.next.next = s.new ListNode(14);
        head.next.next.next.next.next.next.next = s.new ListNode(16);
        head.next.next.next.next.next.next.next.next = s.new ListNode(18);
        head.next.next.next.next.next.next.next.next.next = s.new ListNode(20);

        ListNode result = s.insertGreatestCommonDivisors(head);
        while (result != null) {
            System.out.println(result.val);
            result = result.next;
        }
    }
}