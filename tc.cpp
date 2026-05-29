Topic	Time Complexity
Array Traversal	O(n)
Maximum Element	O(n)
Minimum Element	O(n)
Average	O(n)
Linear Search	O(n)
Binary Search	O(log n)
Bubble Sort	O(n²)
Previous Greater Element	O(n)
Sum of Digits	O(d)
Factorial	O(n)
Reverse Linked List	O(n)
Queue Full Check	O(1)
Queue Empty Check	O(1)
Inorder Traversal	O(n)
Postorder Traversal	O(n)

Arrays
Linear Search → O(n) , Binary Search → O(log n), Bubble Sort → O(n²) 

Factorial
n * fact(n-1)

Sum of Digits
n%10 + sum(n/10)

Fibonacci
fib(n-1)+fib(n-2)
  
Linked List
Structure:
struct Node
{
   int data;
   struct Node *next;
};

Complexity: O(n)
  
Queue -> FIFO
First In First Out
Operations:
Enqueue → rear++
Dequeue → front++
Conditions:
Full
rear == MAX-1
Empty
rear < front
Complexity: O(1)
  
Tree
Traversal Rules:
Inorder
Left Root Right
Preorder
Root Left Right
Postorder
Left Right Root
Complexity:O(n)

Stack-> LIFO
Last In First Out

Queue-> FIFO

Most Important Complexities
Linear Search     O(n)

Binary Search     O(log n)

Bubble Sort       O(n²)

Array Traversal   O(n)

Reverse LL        O(n)

Queue Operations  O(1)

Tree Traversal    O(n)

Factorial         O(n)

Fibonacci         O(2ⁿ)
