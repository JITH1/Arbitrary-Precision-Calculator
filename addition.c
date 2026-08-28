#include "APC.h"
#include "Make_List.h"

void addition_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res)
{
    int carry = 0;
    
    node *temp1 = *tail_op1;
    node *temp2 = *tail_op2;

    while(temp1!= NULL || temp2!=NULL)
    {

         int sum = carry;

         if(temp1!=NULL)
         {
            sum += temp1->value;
            temp1 = temp1->prev;
         }

         if(temp2 != NULL)
         {
            sum += temp2->value;
            temp2 = temp2->prev; 
         }

         int data = sum % 10;
         carry = sum/10;

         Insert_first(data,head_res,tail_res);

    }

    if(carry != 0)
    {
        Insert_first(carry,head_res,tail_res);
    }


}