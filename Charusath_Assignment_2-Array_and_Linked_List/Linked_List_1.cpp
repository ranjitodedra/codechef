/*
Complete the function in the code snippet, 
returning the value of Nth node from the end of a singly linked list A, 
of length L. The function takes two arguments, head of the linked list and an integer N, 
and you are expected to return the answer in the form of an integer.
*/
struct Node {
	int data;
	struct Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
int getNthNodeFromEnd(struct Node* head, int n){
    struct Node *p;
    int l=0,a;
    p = head;
    while (p != NULL)
    {
        l++;
        p=p->next;
    }
    a = l - n;
    for (int i = 0; i < a; i++)
    {
        head=head->next;    
    }
    
    return head->data;
}