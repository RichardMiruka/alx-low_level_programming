# C - Doubly linked lists

* What is a doubly linked list

* How to use doubly linked lists

![final](https://static.packt-cdn.com/products/9781785285493/graphics/B05348_05_11.jpg)

  ## Resources

  * [What is a Doubly Linked List](https://intranet.alxswe.com/rltoken/C5_IRM981SVn8oA8RP3gag)

  ## Please use this data structure for this project:

 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 

typedef struct dlistint_s

{
  
  int n;
    
  struct dlistint_s *prev;
    
  struct dlistint_s *next;

} dlistint_t;
