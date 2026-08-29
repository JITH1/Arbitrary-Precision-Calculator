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
        *tail = temp;

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
    *tail = temp2 ;

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

void Insert_first(int data , node **head, node **tail)
{
    if(*head == NULL)
    {
        node *temp = malloc(sizeof(node));
        temp->value = data ;
        temp->prev = NULL;
        temp->next = NULL;
        *head = temp ;
        *tail = temp ;
        return ;
    }
    
    node *temp = malloc(sizeof(node));
    temp->value = data ;
    temp->prev = NULL;
    temp->next = *head;
    (*head)->prev = temp;
    *head = temp;

    return ;
}

Compare comp_operands(node *head_op1,node *head_op2)
{
    int digits1 = 0 , digits2 = 0;
    
    node *temp = head_op1;

    while(temp!=NULL)
    {
        digits1++;
        temp = temp->next;
    }

    temp = head_op2;
    
    while(temp!=NULL)
    {
        digits2++;
        temp = temp->next;
    }

    if(digits1 > digits2)
    {
        return OPERAND1 ;
    }
    else if(digits2 > digits1)
    {
        return OPERAND2 ;
    }
    else if (digits1 == digits2)
    {
        while(head_op1!=NULL)
        {
            if(head_op1->value > head_op2->value)
            {
                return OPERAND1;
            }
            else if(head_op2->value > head_op1->value)
            {
                return OPERAND2 ;
            }

            head_op1 = head_op1->next;
            head_op2 = head_op2->next;
        }

        return SAME ;
    }

}

void remove_pre_zeros(node **head)
{
    if(*head == NULL)
    return;
 
    node *temp1 = *head ;

    node *temp2 = *head ;

    while(temp1->value == 0 && temp1->next!= NULL)
    {
        temp1 = temp1->next ;
    }

    while(temp2!=temp1)
    {
        node *delete = temp2 ;
        temp2 = temp2->next;
        free(delete);
    } 

    *head = temp2 ;
    temp2->prev = NULL ;

}

void delete_list(node **head,node **tail)
{
    node *temp = *head;

    while(*head!=NULL)
    {
        *head = (*head)->next;
        free(temp);
        temp = *head;
    }

    *head = NULL;
    *tail = NULL;

}

void print_list(node *head,char sign)
{
    if(sign == '+')
    printf("+");
    else if(sign == '-')
    printf("-");

    while(head!=NULL)
    {
        printf("%d",head->value);
        head = head->next;
    }

    printf("\n");

}