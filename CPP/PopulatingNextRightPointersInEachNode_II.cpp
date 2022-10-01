class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if (root) {
            q.push(NULL);
            q.push(root);
        }
        while (q.size() > 1) {
            int len = q.size();
            Node* it = NULL;
            while (len--) {
                Node* n = q.front();
                if (n) {
                    if (n->right) q.push(n->right);
                    if (n->left) q.push(n->left);
                    n->next = it;
                    it = n;
                } else {
                    q.push(n);
                }
                q.pop();
            }
        }
        return root;
    }
};
