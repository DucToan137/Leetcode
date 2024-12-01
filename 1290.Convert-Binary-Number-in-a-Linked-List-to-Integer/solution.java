public class solution {
    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
    
    public int convertToDecimal(String binary) {
        int decimal = 0;
        for (int i = 0; i < binary.length(); i++) {
            decimal = decimal * 2 + binary.charAt(i) - '0';
        }
        return decimal;
    }
    
    public int getDecimalValue(ListNode head) {
        String binary = "";
        while (head != null) {
            binary += head.val;
            head = head.next;
        }
        return convertToDecimal(binary);
    }
    
    public static void main(String[] args) {
        solution sol = new solution();
        ListNode head = sol.new ListNode(1);
        head.next = sol.new ListNode(0);
        head.next.next = sol.new ListNode(1);
        System.out.println(sol.getDecimalValue(head));
    }
}
