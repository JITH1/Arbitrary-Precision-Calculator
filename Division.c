#include "APC.h"
#include "Make_List.h"

Status division_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res)
{

    if((*head_op2)->value == 0)
    {
        printf(RED"\nError : Division by zero is Undefined...!\n"RESET);
        return FAILED ; 
    }
    else if((*head_op1)->value == 0)
    {
        Insert_first(0,head_res,tail_res);
        return SUCCESS ;
    }
    
    if(comp_operands(*head_op1,*head_op2) == OPERAND2)
    {
        Insert_first(0,head_res,tail_res);
        return SUCCESS ;
    }

    node *quotient_head = NULL;
    node *quotient_tail = NULL;

    node *current_head = NULL;
    node *current_tail = NULL;

    node *temp = *head_op1 ;

    int q_value ;
    int q_flag = 0;

    while(temp!=NULL)
    {

         insert_at_last(&current_head,&current_tail,temp->value);
         remove_pre_zeros(&current_head);
         
         if(comp_operands(current_head,*head_op2) == OPERAND2)
         {
             q_value = 0;
         }
         else
         {
            q_value = 0;
            
            int n = comp_operands(current_head,*head_op2);

            while(n == OPERAND1 || n == SAME)
            {
               node *temp_head = NULL;
               node *temp_tail = NULL;

               substraction_operation(&current_head,&current_tail,head_op2,tail_op2,&temp_head,&temp_tail);
               delete_list(&current_head,&current_tail);
               current_head = temp_head;
               current_tail = temp_tail;
               
               q_value++;

               n = comp_operands(current_head,*head_op2);

            }

         }

         if((q_value!=0) || q_flag == 1)
         {
            insert_at_last(&quotient_head,&quotient_tail,q_value);
            q_flag = 1;
         }

         temp = temp->next;

    }

    remove_pre_zeros(&quotient_head);

    delete_list(&current_head,&current_tail);

    *head_res = quotient_head;
    *tail_res = quotient_tail;

    return SUCCESS ;

}