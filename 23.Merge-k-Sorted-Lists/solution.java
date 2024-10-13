import java.util.List;

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

    ListNode mergeList(ListNode a, ListNode b) {
        ListNode result = new ListNode();
        ListNode temp = result;
        while (a != null && b != null) {
            if (a.val < b.val) {
                temp.next = a;
                a = a.next;
            } else {
                temp.next = b;
                b = b.next;
            }
            temp = temp.next;
        }
        temp.next = (a == null) ? b : a;
        return result.next;
    }

    public ListNode mergeKLists(ListNode[] lists) {
        if (lists.length == 0) {
            return null;
        }

        ListNode result = lists[0];
        for (int i = 1; i < lists.length; i++) {
            result = mergeList(result, lists[i]);
        }
        return result;
    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode a = s.new ListNode(1);
        ListNode b = s.new ListNode(2);
        ListNode c = s.new ListNode(3);
        a.next = b;
        b.next = c;

        ListNode d = s.new ListNode(1);
        ListNode e = s.new ListNode(2);
        ListNode f = s.new ListNode(3);
        d.next = e;

        ListNode[] lists = { a, d };
        ListNode result = s.mergeKLists(lists);
        while (result != null) {
            System.out.println(result.val);
            result = result.next;
        }
    }
}
