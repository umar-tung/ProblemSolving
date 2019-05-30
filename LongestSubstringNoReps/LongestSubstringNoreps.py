class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # create a bucket
        
        substr = []
        counter=0;
        longest=0;
        
        # for i ... length of string
        for i in s:
            substr.append(i)
            if i in substr[:-1]:
                del substr[0:substr.index(i)+1]
            counter = len(substr)
            if counter > longest:
                longest = counter
        return longest
