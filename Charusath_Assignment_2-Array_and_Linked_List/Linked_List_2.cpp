struct Node {
	int data;
	struct Node* next;
	Node(){
        next = NULL;
    }
	Node(int x){
		data = x;
		next = NULL;
	}
};
Node* merge(Node* head1, Node* head2)
{
    struct Node *last,*p,*q,*third;
    p = head1;
    q= head2;
    third = NULL;
    last = NULL;
    
    if(p->data < q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    
    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    
    if(p)last->next=p;
    if(q)last->next=q;
    
    return third;
}
