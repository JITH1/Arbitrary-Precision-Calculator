#ifndef M_LIST
#define M_LIST

#include "APC.h"

void create_list(char *operand, node **head, node **tail);
void insert_at_last(node **head, node **tail, int data);
void print_list(node *head,char sign);
void remove_pre_zeros(node **head);
void Insert_first(int data , node **head, node **tail);
void delete_list(node **head,node **tail);

void addition_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res);
void substraction_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res);
void multiplication_operation(node **head_op1,node **tail_op1,node **head_op2,node **tail_op2,node **head_res,node **tail_res);

#endif