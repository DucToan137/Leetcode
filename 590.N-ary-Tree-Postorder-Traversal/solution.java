import java.util.ArrayList;
import java.util.List;

public class solution {
    class Node {
        public int val;
        public List<Node> children;

        public Node() {
        }

        public Node(int _val) {
            val = _val;
        }

        public Node(int _val, List<Node> _children) {
            val = _val;
            children = _children;
        }
    }

    public void postorder(Node root, List<Integer> res) {
        if (root == null) {
            return;
        }
        for (Node child : root.children) {
            postorder(child, res);
        }
        res.add(root.val);
    }

    public List<Integer> postorder(Node root) {
        List<Integer> res = new ArrayList<>();
        postorder(root, res);
        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        Node root = s.new Node(1);
        Node node1 = s.new Node(3);
        Node node2 = s.new Node(2);
        Node node3 = s.new Node(4);
        Node node4 = s.new Node(5);
        Node node5 = s.new Node(6);
        List<Node> children = new ArrayList<>();
        children.add(node1);
        children.add(node2);
        children.add(node3);
        children.add(node4);
        children.add(node5);
        root.children = children;
        List<Integer> res = s.postorder(root);
        for (int i : res) {
            System.out.println(i);
        }
    }
}
