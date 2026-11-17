/*
    Linked List -> A linked list a linear data structure unlike the memory alloction is not continious.

    A linked list a collection of Node. each node is connected to another node.

    Node -> A node is a user defined datattype that hold the data and the address of another Node.

    Head of linked list -> The very first node in the linked list is the head of the linked list

    Tail of linked list -> The very last node in the linked list is the tail of the linked list

    3 Types of Lined List:-


         Singly Linked list -> A singly list is a collection of node where each node have a data and address to next node. The last node will point to null.

        Doubly Linked List -> A doubly is a collection of the Node where each Node will have a data, address to next Node and address to previous Node. the next of the tail node will have NULL and similary the previous of head Node is also NUll

        Circular Linked List -> A singly circular linked list is a collection of node where each node have a data and address to next node. The last node will point to head.
        
        Doubly Linked List -> A doubly circular is a collection of the Node where each Node will have a data, address to next Node and address to previous Node. the next of the tail node will connect to head and similary the previous of head Node is connected to tail.


        Advantages ->
            -> The size is not fixed it can grom dynamically.
            -> Inserion and deletion from the head of linked list is of T.C O(1).
            -> Music Player -> Dubly circular
            -> singly circular -> Multi player

        Disadvantages :
            -> It does not have index
            -> search via index is not possible


            

        
Common Operations

Working with a linked list involves manipulating pointers to change the order or size of the sequence.

• Traversal. Starting at the head and following each pointer until you reach the end of the list.


• Insertion. Creating a new node and updating the surrounding pointers to include it at the beginning, middle, or end


• Deletion. Updating the pointers of adjacent nodes to bypass a target node and free its memory.


• Search. Checking each node one by one from the head until you find a matching value.
*/