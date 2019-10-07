print(2+4)
print("shivam")
print ('c:\docs\Tripathi')
print(8//9)
print(3**2)
print(90/10)
print("shivam"+"mani")
print("shivam's coder")
print('Shivam "geekcoder"')
print('shivam\'s"Don"')
print ('c:\docs\nripathi')
print ('c:\docs\tripathi')
print (r'c:\docs\tripathi')
print (2-10)
print (3*'shivam')
name='Geekcodershivam'
print (name)
print (name[2:])
print (name[0:3])
print (name[:8])
print (name[-1])
print (name[0:0])
print (name[1:9])
print (name[:10])

class Node:
    def __int__(self, value):
        self.value=value
        self.next=None
class LinkedList:
    def __int__(self):
            self.start=None

            def insert(self,value):
                if self.start==None:
                    self.start=Node(value)
                    current=self.start
                    while current.next is not None:
                        current=current.next
                        current.next=Node(value)

                      def print(self):
                     current = self.start
                      while current is not None:
                        print(current.value)
                         current=current.next

linkedlist = LinkedList()
linkedlist.insert(10)
linkedlist.insert(20)
linkedlist.insert(30)
linkedlist.insert(40)
linkedlist.insert(50)
linkedlist.print()