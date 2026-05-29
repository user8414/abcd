struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;
NODE createNode(int data) {
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->next=NULL;
	return temp;

}

NODE addNodes(NODE head, int value) {
	NODE newNode = (NODE)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        return newNode;
    }

    NODE temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;

}
NODE insertAtBegin(NODE first, int x) {
	NODE temp=createNode();
	temp->next=first;
	first=temp;
	temp->data=x;
	return temp;
}


NODE insertAtEnd(NODE first, int x) {
	NODE temp =createNode();
	if(first==NULL){
		temp->data=x;
		return temp;
	}
	else{
		NODE curr=first;
		while(curr->next!=NULL){
			curr=curr->next;
			
		}
		curr->next=temp;
		temp->data=x;
	}
	return first;

}

NODE insertAtPosition(NODE first, int pos, int x) {
	NODE ptr =(NODE)malloc(sizeof(struct node));
	ptr-> data =x;
	NODE p=first;
	if(pos==1){
		ptr->next=first;
		first=ptr;
	}else {
		int c=1;
		while (c<pos-1 && p!=NULL){
			p=p->next;
			c++;
	}
	if(p!=NULL){
		ptr->next=p->next;
	p->next=ptr;
}else{
		printf("No such position in SLL so insertion is not possible\n");
	}
}
return first;
}

int count(NODE first) {
	NODE temp=first;
	int i=0;
	while(temp!=NULL){
		temp=temp->next;
		i++;
	}
	return i;

}

void traverseList(NODE first) {
	NODE temp = first;
	while (temp != NULL) {
		printf("%d --> ",temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");
}