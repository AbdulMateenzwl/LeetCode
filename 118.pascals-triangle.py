class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        ans.append([1])
        if numRows == 1:
            return ans

        k = 1
        while k < numRows:
            arr = [1]
            for i in range(1,k,1):
                arr.append(ans[k-1][i-1]+ans[k-1][i])
            arr.append(1)
            ans.append(arr)
            k+=1
        return ans