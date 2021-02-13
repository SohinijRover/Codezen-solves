/*
Given two linked lists sorted in increasing order. Merge them such a way that the result list is in decreasing order (reverse order).
Try solving without reverse, with O(1) auxiliary space (in-place) and only one traversal of both lists. You just need to return the head of new linked list, don't print the elements.
*/

/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/

Node<int>* merge_reverse(Node<int>* head1,Node<int>* head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(!head1)
        return head2;
    if(!head2)
        return head1;
    Node* p1 = head1, *p2 = head2,*resHead=nullptr,*resTail=nullptr;
    while(p1 && p2){
        if(p1->data<p2->data){
            if(!resHead){
                resHead = p1;
                resTail = resHead;
                p1 = p1->next;
            }
            else{
                resTail -> next = p1;
                resTail = resTail->next;
                p1=p1->next;
            }
        }
        else {
            if(!resHead){
                resHead = p2;
                resTail = resHead;
                p2 = p2->next;
            }
            else{
                resTail -> next = p2;
                resTail = resTail->next;
                p2=p2->next;
            }
        }
    }
    while(p1){
        resTail->next = p1;
        resTail = resTail->next;
        p1 = p1->next;
    }
    while(p2){
        resTail->next = p2;
        resTail = resTail->next;
        p2 = p2->next;
    }
    return resHead;
}
