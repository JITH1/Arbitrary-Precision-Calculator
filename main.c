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
    char sign ;

    if(argv[2][0] == '+')
    {
        if((n == OPERAND1 || n == SAME ))
        {
            if((argv[1][0] == '+' || argv[3][0] == '+') || (argv[1][0] != '+' || argv[3][0] != '+'))
            {
                sign = '+';
                addition_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            else if(argv[1][0] == '-' && (argv[3][0] == '+' || argv[3][0] != '+'))
            {
                sign = '-';
                substraction_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            else if((argv[1][0] == '+' || argv[1][0] != '+') && argv[3][0] == '-')
            {
                sign = '+';
                substraction_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            else if(argv[1][0] == '-' && argv[3][0] == '-')
            {
                sign = '-';
                addition_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            
        }
        else if(n == OPERAND2)
        {
            if((argv[1][0] == '+' || argv[3][0] == '+') || (argv[1][0] != '+' || argv[3][0] != '+'))
            {
                sign = '+';
                addition_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
            else if(argv[1][0] == '-' && (argv[3][0] == '+' || argv[3][0] != '+'))
            {
                sign = '+';
                substraction_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
            else if((argv[1][0] == '+' || argv[1][0] != '+') && argv[3][0] == '-')
            {
                sign = '-';
                substraction_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
            else if(argv[1][0] == '-' && argv[3][0] == '-')
            {
                sign = '-';
                addition_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
            
        }

    }
    else if(argv[2][0] == '-')
    {
        if(n == OPERAND1 || n == SAME)
        {
            
            if((argv[1][0] == '-') && (argv[3][0] == '-'))
            {
                sign = '-';
                substraction_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            else if((argv[1][0] == '+' || argv[1][0] != '+') && argv[3][0] == '-')
            {
                sign  = '+';
                addition_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            else if((argv[1][0] == '-') && (argv[3][0] == '+' || argv[3][0] != '+'))
            {
                sign = '-';
                addition_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);  
            }
            else 
            {
                sign = '+';
                substraction_operation(&head_op1,&tail_op1,&head_op2,&tail_op2,&head_res,&tail_res);
            }
            
        }
        else if(n == OPERAND2)
        {
            if((argv[1][0] == '-') && (argv[3][0] == '-'))
            {
                sign = '+';
                substraction_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
            else if((argv[1][0] == '+' || argv[1][0] != '+') && argv[3][0] == '-')
            {
                sign  = '+';
                addition_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
            else if((argv[1][0] == '-') && (argv[3][0] == '+' || argv[3][0] != '+'))
            {
                sign = '-';
                addition_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);  
            }
            else 
            {
                sign = '-';
                substraction_operation(&head_op2,&tail_op2,&head_op1,&tail_op1,&head_res,&tail_res);
            }
        }
        
    }
    
    printf(YELLOW"\n\n   Operation : %s",argv[2]);
    printf("\n--------------------------------------------------------------------------\n");
    printf("|  Operand 1 : %-56s  |\n",argv[1]);
    printf("--------------------------------------------------------------------------\n");
    printf("|  Operand 2 : %-56s  |\n",argv[3]);        
    printf("--------------------------------------------------------------------------\n");
    printf("     Result  :  ");   
    print_list(head_res,sign);
    printf("\n");
    
    return 0;

}