import java.lang.classfile.components.ClassPrinter.ListNode;
import java.util.*;

public class solution {
    public class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
            next = null;
        }
    }

    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if (headA == null || headB == null)
            return null;

        ListNode a = headA;
        ListNode b = headB;

        // if a & b have different len, then we will stop the loop after second
        // iteration
        while (a != b) {
            // lặp cho đến khi a và b cùng trỏ vào 1 node hoặc null
            a = a == null ? headB : a.next;
            b = b == null ? headA : b.next;
        }

        return a;

    }

    public static void main(String[] args) {
        solution s = new solution();
        ListNode headA = s.new ListNode(4);
        headA.next = s.new ListNode(1);
        headA.next.next = s.new ListNode(8);
        headA.next.next.next = s.new ListNode(4);
        headA.next.next.next.next = s.new ListNode(5);

        ListNode headB = s.new ListNode(5);
        headB.next = s.new ListNode(0);
        headB.next.next = s.new ListNode(1);
        headB.next.next.next = s.new ListNode(8);

        ListNode result = s.getIntersectionNode(headA, headB);
        System.out.println(result.val);

    }
}