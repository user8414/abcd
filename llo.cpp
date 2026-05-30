CREATE NODE
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;

    head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = NULL;

    printf("%d",head->data);

    return 0;
}

TRAVERSAL OF LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *second;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter first node data: ");
    scanf("%d", &head->data);
    printf("Enter second node data: ");
    scanf("%d", &second->data);
    head->next = second;
    second->next = NULL;
    struct Node *temp = head;
    printf("Linked List: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}

INSERT AT BEGINNING

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head,*newNode;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 20;
    head->next = NULL;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = head;
    head = newNode;
    printf("%d",head->data);
    return 0;
}

INSERT AT END 

temp = head;
while(temp->next != NULL)
{
    temp = temp->next;
}
temp->next = newNode;
newNode->next = NULL;


SEARCH IN LINKED LIST
temp = head;
while(temp != NULL)
{
    if(temp->data == key){
        printf("Found");
        break;
    }
    temp = temp->next;
}






