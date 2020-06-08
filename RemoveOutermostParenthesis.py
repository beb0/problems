#Problem Link: https://leetcode.com/problems/remove-outermost-parentheses/

class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        self.isolator = 0
        self.word = ""
        self.words = []
        self.out = ""
        
        for i in range(len(S)):
            if S[i] == '(':
                self.isolator += 1
                self.word += S[i]
            elif S[i] == ')':
                self.isolator -= 1
                self.word += S[i]
            
            if self.isolator == 0:
                self.words.append(self.word)
                self.word = ""
        
        for w in self.words:
            if len(w) > 2:
                temp = list(w)
                temp.pop(0)
                temp.pop(len(w)-2)
                for k in temp:
                    self.out += k
        
        return self.out