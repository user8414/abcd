struct Node* merge(struct Node* h1,
                   struct Node* h2)
{
    if(h1==NULL)
        return h2;

    struct Node *temp=h1;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=h2;

    return h1;
}