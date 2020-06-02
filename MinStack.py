#Problem Link: https://leetcode.com/problems/min-stack/

class Node:
    def __init__(self, value):
        self.value = value
        self.next = None
        
class Stack:
    def __init__(self):
        self.head = None
    
    def push(self, value):
        self.node = Node(value)
        self.node.next = self.head
        self.head = self.node
    
    def pop(self):
        self.popValue = self.head.value
        self.head = self.head.next
        return self.popValue
    
    def printStack(self):
        self.pr = self.head
        while self.pr != None:
            print(self.pr.value)
            self.pr = self.pr.next
        
class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.min = None
        self.minStack = Stack()
        self.mainStack = Stack()
        

    def push(self, x: int) -> None:
        if self.mainStack.head == None:
            self.min = x
            self.minStack.push(self.min)
            
        self.mainStack.push(x)
        
        if x <= self.minStack.head.value:
            self.min = x
            self.minStack.push(self.min)
        

    def pop(self) -> None:
        self.val = self.mainStack.pop()
        if self.val == self.minStack.head.value:
            self.min = self.minStack.pop()
        

    def top(self) -> int:
        return self.mainStack.head.value

    def getMin(self) -> int:
        return self.minStack.head.value


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()

