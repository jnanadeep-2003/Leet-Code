class Solution:
    def minimumPushes(self, word: str) -> int:
        l=len(word)
        counter=0
        for i in range(l):
            counter+=(i//8)+1
        return counter

        