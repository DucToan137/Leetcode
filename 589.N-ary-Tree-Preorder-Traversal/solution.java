public class solution {

    public void preorder(Node root, List<Integer> list) {
        if (root == null) {
            return;
        }
        list.add(root.val);
        for (Node child : root.children) {
            preorder(child, list);
        }
    }

    public List<Integer> preorder(Node root) {
        List<Integer> list = new ArrayList<>();
        preorder(root, list);
        return list;
    }

    public static void main(String[] args) {
        solution s = new solution();
        Node root = new Node(1);
        Node node1 = new Node(3);
        Node node2 = new Node(2);
        Node node3 = new Node(4);
        List<Node> children = new ArrayList<>();
        children.add(node1);
        children.add(node2);
        children.add(node3);
        root.children = children;
        Node node4 = new Node(5);
        Node node5 = new Node(6);
        List<Node> children1 = new ArrayList<>();
        children1.add(node4);
        children1.add(node5);
        node1.children = children1;
        List<Integer> list = s.preorder(root);
        for (int i : list) {
            System.out.println(i);
        }
    }
}
