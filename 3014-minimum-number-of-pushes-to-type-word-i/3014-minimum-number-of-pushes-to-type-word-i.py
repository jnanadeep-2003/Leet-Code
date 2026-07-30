class Solution:
    def minimumPushes(self, word: str) -> int:
        l=len(word)
        if l<=8:
            return(l)
        elif(16>=l>8):
            d=(l-8)*2+8
            return d
        elif(24>=l>16):
            d=(l-16)*3+24
            return d
        elif(l>24):
            d=(l-24)*4+48
            return d
        