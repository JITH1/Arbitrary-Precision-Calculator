#ifndef APC_H
#define APC_H

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define RED    "\033[1;31m"
#define YELLOW "\033[33m"
#define GREEN  "\033[1;32m"
#define RESET  "\033[0m"

typedef enum 
{
    FAILED = 0,
    SUCCESS
}Status;

typedef enum 
{
     SAME = 0,
     OPERAND1 = 1,
     OPERAND2 = 2
}Compare;

typedef struct
{
    struct node *prev;
    int value ;
    struct node *next;
}node;

Status validate_command_line_arg(int argc,char *argv[]);

#endif

