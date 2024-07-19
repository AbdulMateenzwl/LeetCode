class Solution:
    def encode(self, strs: List[str]) -> str:
        result=''
        for strr in strs:
            result +=str(str(len(strr))+'#'+strr)
        
        return result

    def decode(self, s: str) -> List[str]:
        strs=[]

        i = 0
        while i < len(s):
            length = ''
            while s[i] != '#':
                length +=s[i]
                i+=1
            
            length = int(length)
            i+=1
            strr=''
            for j in range(i,i+length):
                strr += s[j]

            i += length 
            strs.append(strr)

        return strs