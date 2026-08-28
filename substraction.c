#include "APC.h"
#include "Make_List.h"

void substraction_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res)
{
    node *temp1 = *tail_op1;
    node *temp2 = *tail_op2;

    int borrow = 0;

    while(temp1!= NULL)
    {
         if(temp2!= NULL)
         {
            
            int data = temp1->value - temp2->value - borrow ;

            if(data < 0)
            {
                data += 10  ;
                Insert_first(data,head_res,tail_res);   
                borrow = 1;
            }
            else
            {
                borrow = 0 ;
                Insert_first(data,head_res,tail_res);
            }

            temp1 = temp1->prev ;
            temp2 = temp2->prev ;

         }
         else
         {
            
            int data = temp1->value - borrow ;

            if(data < 0)
            {
                data+=10;
                borrow = 1;
            }
            else
            {
                borrow = 0;
            }
            
            Insert_first(data,head_res,tail_res);

            temp1 = temp1->prev ;

         } 

    }

    remove_pre_zeros(head_res);
    
}