#include "APC.h"
#include "Make_List.h"

int addition_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res)
{
    int carry = 0;
    int sum = 0;

    node *temp1 = *tail_op1;
    node *temp2 = *tail_op2;

    while(temp1!= NULL)
    {
         if(temp2!= NULL)
         {
            sum = (temp1->value + temp2->value + carry) ;
            carry = sum /10 ;

            int data = sum % 10 ;

            Insert_first(data,head_res,tail_res);

            temp1 = temp1->prev ;
            temp2 = temp2->prev ;

         }
         else
         {
            sum = temp1->value + carry ;
            carry = sum / 10 ;

            int data = sum % 10 ;

            Insert_first(data,head_res,tail_res);

            temp1 = temp1->prev;
         } 

    }


    return SUCCESS;

}