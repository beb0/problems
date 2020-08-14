#famous Queue using 2 stacks no recursion method

class Node:
    def __init__(self, value):
        self.next = None
        self.value = value

class Stack:    
    def __init__(self):
        self.head = None
        
    def push(self, value):
        self.new_node = Node(value)
        self.new_node.next = self.head
        self.head = self.new_node
        
    def pop(self):
        val = self.head.value
        self.head = self.head.next
        return val

    def isEmpty(self):
        return self.head == None

    def peek(self):
        return self.head.value
 

class QueueUsingStack:
    def __init__(self):
        self.s1 = Stack()
        self.s2 = Stack()

    def Enque(self,value):
        while (not self.s2.isEmpty() ):
            self.s1.push(self.s2.pop())
        self.s1.push(value)
    
    def dequeue(self):
        while (not self.s1.isEmpty() ):
            self.s2.push(self.s1.pop())
        self.s2.pop()

    def peek(self):
        while (not self.s1.isEmpty() ):
            self.s2.push(self.s1.pop())
        print(self.s2.peek())

q = QueueUsingStack()
num = input()
i = 0 

while(i < int(num)):
    cin = input()
    promt = cin.split()

    if promt[0] == '1':
        q.Enque(promt[1])
    elif promt[0] == '2':
        q.dequeue()
    else:
        q.peek()
