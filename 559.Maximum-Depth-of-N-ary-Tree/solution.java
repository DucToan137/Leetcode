import java.util.*;

public class solution {
    class Node {
        public int val;
        public List<Node> children;

        public Node() {
            children = new ArrayList<>();
        }

        public Node(int _val) {
            val = _val;
            children = new ArrayList<>();
        }

        public Node(int _val, List<Node> _children) {
            val = _val;
            children = _children != null ? _children : new ArrayList<>();
        }
    };

    public int maxDepth(Node root) {
        if (root == null) {
            return 0;
        }

        if (root.children.size() == 0) {
            return 1;
        }

        int ans = Integer.MIN_VALUE;
        for (Node child : root.children) {
            ans = Math.max(ans, maxDepth(child) + 1);
        }
        return ans;
    }

    public static void main(String[] args) {
        solution s = new solution();
        Node root = s.new Node(1);
        Node node1 = s.new Node(3, root.children);
        Node node2 = s.new Node(2);
        Node node3 = s.new Node(4);
        root.children = new ArrayList<Node>();
        root.children.add(node1);
        root.children.add(node2);
        root.children.add(node3);
        Node node4 = s.new Node(5);
        Node node5 = s.new Node(6);
        node1.children = new ArrayList<Node>();
        node1.children.add(node4);
        node1.children.add(node5);
        System.out.println(s.maxDepth(root));
    }
}
