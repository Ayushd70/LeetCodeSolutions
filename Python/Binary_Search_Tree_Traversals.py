# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

#Binary Search Tree(BST) Inorder Traversal
 

class Solution(object):
    def inorderTraversal(self, root):
        lis = []

        def ino(x):
            if x is None:
                return
            ino(x.left)
            lis.append(x.val)
            ino(x.right)

        ino(root)
        return lis


#Binary Search Tree(BST) PreOrder Traversal

class Solution(object):
    def preorderTraversal(self, root):
        lis = []

        def fic(x):
            if x is None:
                return
            lis.append(x.val)
            fic(x.left)
            fic(x.right)

        fic(root)
        return lis


#Binary Search Tree(BST) PostOrder Traversal

class Solution(object):
    def postorderTraversal(self, root):
        lis = []

        def pos(x):
            if x is None:
                return
            pos(x.left)
            pos(x.right)
            lis.append(x.val)

        pos(root)
        return lis



