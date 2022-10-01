class Solution {
    public List<Integer> largestValues(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        List<Integer> res = new ArrayList<Integer>();
        if (root != null) q.add(root);
        while (q.size() > 0) {
            int len = q.size(), maxx = Integer.MIN_VALUE;
            while (len-- > 0) {
                TreeNode n = q.peek();
                if (n.val > maxx) maxx = n.val;
                if (n.left != null) q.add(n.left);
                if (n.right != null) q.add(n.right);
                q.remove();
            }
            res.add(maxx);
        }
        return res;
    }
}
