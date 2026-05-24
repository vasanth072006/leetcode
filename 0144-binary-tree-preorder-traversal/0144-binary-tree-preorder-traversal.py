class Solution:
    def preorder(self, root, ans):
        # base case
        if root is None:
            return
        
        # recursive case
        ans.append(root.val)
        self.preorder(root.left, ans) # left subtree phele
        self.preorder(root.right, ans) # right subtree

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        self.preorder(root, ans)
        return ans
