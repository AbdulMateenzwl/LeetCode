class Solution:
    def simplifyPath(self, path: str) -> str:
        # stack = []
        # i = 0
        # while i < len(path):
        #     if path[i] != '/':
        #         break
        #     else:
        #         i+=1
        #         start = False
        #         word = ""
        #         while i < len(path) and (path[i] != '/' or not start ): 
        #             c = path[i]
        #             print(c)
        #             if c is not '/':
        #                 start = True
        #                 word+=c
        #             i += 1
        #         if word == '..':
        #             if stack:
        #                 stack.pop()
        #         elif word == '.' or word == "":
        #             pass
        #         else:
        #             stack.append(word)

        # return "/"+"/".join(stack)

        stack = []

        path_arr = path.split("/")

        for _path in path_arr:
            if _path == '' or _path == '.':
                continue
            elif _path == '..':
                if stack:
                    stack.pop()
            else:
                stack.append(_path)
        
        return "/" + "/".join(stack)