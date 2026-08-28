#include "APC.h"
#include "Make_List.h"

void multiplication_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res)
{
    node *temp1;
    node *temp2 = *tail_op2;

    node *mul_head = NULL; // holds the multiplicative result of each digit 
    node *mul_tail = NULL;

    node *partial_head = NULL; // holds partial product of each stage 
    node *partial_tail = NULL;

    int count = 0 , carry = 0;

    while(temp2!=NULL)
    {
        carry = 0;
        temp1 = *tail_op1;

        mul_head = NULL;
        mul_tail = NULL;

        while(temp1!=NULL)
        {
            
            int data = (temp2->value * temp1->value) + carry ;
            carry = data / 10 ;
            data = data % 10 ;
            
            Insert_first(data,&mul_head,&mul_tail);

            temp1 = temp1->prev ;
        }
        
        if(carry != 0)
        {
            Insert_first(carry,&mul_head,&mul_tail);
        }

        for(int i = 0 ; i<count ; i++)
        {
            insert_at_last(&mul_head,&mul_tail,0);
        }

        if(partial_head == NULL && partial_tail == NULL)
        {
            partial_head = mul_head;
            partial_tail = mul_tail;
            count++;
        }
        else
        {
            node *int_res_head = NULL ;
            node *int_res_tail = NULL;

            addition_operation(&partial_head,&partial_tail,&mul_head,&mul_tail,&int_res_head,&int_res_tail);
            
            delete_list(&mul_head,&mul_tail);
            delete_list(&partial_head,&partial_tail);
            partial_head = int_res_head ;
            partial_tail = int_res_tail;

            count++;
        }

        temp2 = temp2->prev;
    }

    remove_pre_zeros(&partial_head);

    *head_res = partial_head;
    *tail_res = partial_tail;

}