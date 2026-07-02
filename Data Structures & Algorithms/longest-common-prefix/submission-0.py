def getFirstPref(str1, str2):
        st = ""
        for ch1,ch2 in zip(str1, str2):
            if ch1 == ch2:
                st+=ch1
            else :
                break
        return st

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        t = strs[0]
        for word in strs:
            t = getFirstPref(t,word)
            if t == "":
                return ""
        return t
    

