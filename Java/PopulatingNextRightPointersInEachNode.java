class Solution {
    public Node connect(Node root) {
        Queue<Node> q = new LinkedList<>();
        if (root != null) {
            q.add(null);
            q.add(root);
        }
        while (q.size() > 1) {
            int len = q.size();
            Node it = null;
            while (len-- > 0) {
                Node n = q.peek();
                if (n != null) {
                    if (n.right != null) q.add(n.right);
                    if (n.left != null) q.add(n.left);
                    n.next = it;
                    it = n;
                } else {
                    q.add(n);
                }
                q.remove();
            }
        }
        return root;
    }
}
