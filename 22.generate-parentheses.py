class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def helper(l, r , strr):
            if l == n and r == n:
                res.append(strr)
                return

            if l < n:
                helper(l+ 1,r,strr+'(')
            
            if r < l:
                helper(l, r + 1, strr+')')
        
        helper(0, 0, '')
        return res