class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        s=set(candyType)
        mc=len(candyType)//2
        if len(s)<mc:
            return len(s)
        else:
            return mc