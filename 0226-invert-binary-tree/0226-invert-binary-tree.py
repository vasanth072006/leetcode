class Solution:
    def swap(self, root:TreeNode):
        temp=root.left
        root.left=root.right
        root.right=temp
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return
        self.swap(root)
        self.invertTree(root.left)
        self.invertTree(root.right)
        return root
