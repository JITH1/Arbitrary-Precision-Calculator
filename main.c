#include "APC.h"
#include "Make_List.h"

int main(int argc,char *argv[])
{
    node *head_op1 = NULL;
    node *tail_op1 = NULL;
    
    node *head_op2 = NULL;
    node *tail_op2 = NULL;
    
    node *head_res = NULL;
    node *tail_res = NULL;


    if(validate_command_line_arg(argc,argv))
    {
        printf(GREEN"\nArgument Validation Successfull...!\n"RESET);
        
        create_list(argv[1],&head_op1,&tail_op1);
        create_list(argv[3],&head_op2,&tail_op2);
        remove_pre_zeros(&head_op1);
        remove_pre_zeros(&head_op2);
     
    }
    else
    {
        printf(RED"\nArgument Validation Failed...!\n"RESET);
        return FAILED;
    }
    
    int n = comp_operands(head_op1,head_op2) ;

    (n == OPERAND1 ) ? printf("Op 1 > Op2\n") : (n == OPERAND2) ? printf("Op 2 > Op1\n") : printf("Both Operands are same\n") ;
    
    print_list(head_op1);
    print_list(head_op2);

    return 0;

}