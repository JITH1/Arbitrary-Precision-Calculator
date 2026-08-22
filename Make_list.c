#include "APC.h"
#include "Make_List.h"

void insert_at_last(node **head, node **tail, int data)
{
    if(*head == NULL)
    {
        node *temp = malloc(sizeof(node));
        temp->value = data;
        *head = temp;
        temp->prev = NULL;
        temp->next = NULL;

        return;
    }

    node *temp1 = *head;

    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }

    node *temp2 = malloc(sizeof(node));
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = NULL;

    temp2->value = data ;

}

void create_list(char *operand, node **head, node **tail)
{
    int i = 0 ;

    if(operand[0] == '+' || operand[0] == '-')
    {
        i = 1;
    }

    while(operand[i] != '\0')
    {
        int digit = operand[i] - '0' ;
        insert_at_last(head,tail,digit);
        i++;
    }
    
}

void print_list(node *head)
{
    printf("\nHead -> ");

    while(head!=NULL)
    {
        printf("%d ",head->value);
        head = head->next;

        if(head)
        {
           printf("-> ");
        }
    }

    printf("<- Tail\n");

}