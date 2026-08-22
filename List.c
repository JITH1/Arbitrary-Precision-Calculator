#include "APC.h"

Status validate_command_line_arg(int argc,char *argv[])
{
    if(argc < 4)
    {
        printf(RED"\nInsufficient Arguments...!\n");
        return FAILED;
    }
    else if(argc > 4 )
    {
        printf(RED"\nToo Many Arguments...!\n"RESET);
        return FAILED ;
    }
    
    if(!(argv[1][0] == '+' || argv[1][0] == '-'))
    {

        int i = 0 ;

        while(argv[1][i] != '\0')
        {
            if(!isdigit(argv[1][i]))
            {
                printf(RED"\nThe 1st input operand contains non-digit entry's...!\n"RESET);
                return FAILED ;
            }

            i++;
        }

    }
    else
    {
        int i = 1 ;

        while(argv[1][i] != '\0')
        {
            if(!isdigit(argv[1][i]))
            {
                printf(RED"\nThe 1st input operand contains non-digit entry's...!\n"RESET);
                return FAILED ;
            }

            i++;
        }
    }

    if(!(argv[3][0] == '+' || argv[3][0] == '-'))
    {

        int i = 0 ;

        while(argv[3][i] != '\0')
        {
            if(!isdigit(argv[3][i]))
            {
                printf(RED"\nThe 2nd input operand contains non-digit entry's...!\n"RESET);
                return FAILED ;
            }

            i++;
        }

    }
    else
    {
        int i = 1 ;

        while(argv[3][i] != '\0')
        {
            if(!isdigit(argv[3][i]))
            {
                printf(RED"\nThe 2nd input operand contains non-digit entry's...!\n"RESET);
                return FAILED ;
            }

            i++;
        }

    }

    if(!((strcmp(argv[2],"+") == 0) || (strcmp(argv[2],"-") == 0) || (strcmp(argv[2],"/") == 0) || (strcmp(argv[2],"x") == 0) || (strcmp(argv[2],"X") == 0)))
    {
         printf(RED"\nInvalid Operation type...!\nExpected Operation type : + , - , x , X , / \n"RESET);
         return FAILED ;  
    }

    return SUCCESS ;
}